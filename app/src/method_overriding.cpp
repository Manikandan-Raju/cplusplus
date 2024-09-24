#include <iostream>
using namespace std;

class Base{
    int a;
    public:
        virtual void show(){cout<<"Base";}
};

class Derived: public Base{
    int b;
    public:
        void show(){cout<<"Derived";}
};

int main(){
  Derived d;
  d.show();cout << sizeof(Derived);
  Base *ptr;
  ptr = new Derived();
  ptr->show();   // Base
  delete ptr;
  cout << sizeof(Derived);
}
