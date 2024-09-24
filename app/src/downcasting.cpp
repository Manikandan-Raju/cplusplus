#include <iostream>
using namespace std;

class Base{
    int a;
    public:
        virtual void fun1() = 0;
        virtual void fun2(){cout<<"Base fun1"<<endl;}
        void fun3(){cout<<"Base fun3"<<endl;}
};

class Derived: public Base{
    int b;
    public:
        void fun1(){cout<<"Derived fun1"<<endl;}
        void fun4(){cout<<"Derived fun4"<<endl;}
};

class Unwanted{
    public:
        void fun4(){cout<<"Unwanted fun4"<<endl;}
};


int main(){
  Base *ptr;
  ptr = new Derived();
  ptr->fun1();  //late binding since it is virtual function
  ptr->fun2();  //late binding
  ptr->fun3();  //early binding
//   ptr->fun4();  //early binding - fail
  Derived *dervptr;
  dervptr = (Derived *)(ptr);
  dervptr->fun4();
  dervptr = (Derived *) new Unwanted();
  dervptr->fun4();
  Unwanted *mtr = (Unwanted*) ptr;
  mtr->fun4();
  dervptr = dynamic_cast<Derived *>(ptr);
  if (ptr !=nullptr)
    dervptr->fun4();
  else
    cout<<"Conversion failed";
   Unwanted *mtr2 = dynamic_cast<Unwanted *>(ptr);
  if (mtr2 !=nullptr)
    dervptr->fun4();
  else
    cout<<"Conversion failed";
  delete ptr;
}