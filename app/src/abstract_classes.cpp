#include <iostream>
using namespace std;

class Base{
    int a;
    public:
        virtual void fun1() = 0;
        virtual void fun2(){cout<<"Base fun1";}
        void fun3(){cout<<"Base fun3";}
};

class Derived: public Base{
    int b;
    public:
        void fun1(){cout<<"Derived fun1";}
};

int main(){
  Base *ptr;
  ptr = new Derived();
  ptr->fun1();
  ptr->fun2();
  ptr->fun3();
  delete ptr;
}