#include <iostream>
#include <string>
using namespace std;

class Sample{
  private:
    int *ptr;



public:
    // dynamic ctors
    Sample(){ ptr = new int;  }
    // destructor
   ~Sample(){ delete ptr;     }
   
   Sample(const Sample& args) {  // call by reference
     this->ptr = new int;        // it should allocate memory   
     (*this->ptr) = *(args.ptr); // copy the value
   }   
   void set(int v) { *ptr = v; }
   void show()     { cout<<"*Ptr = "<<*ptr<<endl; }
};



int main(){
  Sample ob;
  ob.set(20);
  ob.show();
  Sample dest(ob);  // declare & init - copy ctor
  dest.show();

//   Sample *ob = new Sample();
//   ob->set(20);
//   ob->show();
//  Sample dest(*ob);  // declare & init - copy ctor
//   dest.show();
}