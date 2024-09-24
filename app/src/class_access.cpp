#include <iostream>
using namespace std;

class A{
    protected:
       void funapro(){ cout<<"FunA pro called\n"; }
    public:
       void funapub(){ cout<<"FunA pub called\n"; }
};
class B :  A{
    protected:
       void funbpro(){ cout<<"FunB pro called\n"; }
    public:
       void funbpub(){funapub(); cout<<"FunB pub called\n"; }
};
class C :  B{
    protected:
       void funcpro(){
        //    funapro();
           funbpro();
           cout<<"FunC pro called\n"; }
    public:
       void funcpub(){
           funcpro();
           funbpub();
           cout<<"FunC pub called\n"; }
};



int main(){
    C  ob;
    // ob.funapub();
    // ob.funbpub();
    ob.funcpub();
}