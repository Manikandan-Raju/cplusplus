#include <iostream>
using namespace std;

class A  {
    public:
    A(){
        cout << "con of A\n";
    }
    A(int b){
        cout << b;
        cout << "con of A\n";
    }
    ~A(){
        cout << "des of A\n";
    }
};

class B: public A{
    public:
    B(){
        cout << "con of B\n";
    }
    B(int a,int b): A(b) {
        cout << a;
        cout << "con of B\n";
    }
    ~B(){
        cout << "des of B\n";
    }
};

int main(){
    B b(1,2);
}