#include <iostream>
using namespace std;

#include <typeinfo>

int main(){
    int num1 = 10;
    int num2 = 20;
    string b;
    if(typeid(num1) == typeid(int))
        cout<<"type is integer";
        cout<<typeid(num1).name();
}