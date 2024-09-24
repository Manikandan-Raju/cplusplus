#include <iostream>
#include <vector>
using namespace std;
#include <typeinfo>

class Alpha{
    public:
        virtual void fun1() = 0;
};

class Beta: public Alpha{
    public:
        void fun2(){cout<<"Beta fun2"<<endl;}
        void fun1(){cout<<"Alpha fun1"<<endl;}
        
};

class Delta: public Alpha{
    public:
        void fun3(){cout<<"Delta fun3"<<endl;}
        void fun1(){cout<<"Alpha fun1"<<endl;}
};

class Omega: public Alpha{
    public:
        void fun4(){cout<<"Omega fun4"<<endl;}
        void fun1(){cout<<"Alpha fun1"<<endl;}
};

int main(){
   vector<Alpha*>  vob;
   vob.push_back(new Beta());
   vob.push_back(new Delta());
   vob.push_back(new Omega());
  
   for(auto it:vob)   {
      it->fun1();
     if(typeid(*it) == typeid(Beta))
     {
        Beta *bptr;
        bptr = dynamic_cast<Beta*>(it);
        bptr->fun2();    
     }
     if(typeid(*it) == typeid(Delta))
     {
        Delta *dptr;
        dptr = dynamic_cast<Delta*>(it);
        dptr->fun3();    
     }
     if(typeid(*it) == typeid(Omega))
     {
        Omega *optr;
        optr = dynamic_cast<Omega*>(it);
        optr->fun4();    
     }
   }
}