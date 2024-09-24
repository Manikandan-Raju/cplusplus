#include <iostream>
using namespace std;

int main(){
    int x = 10;
    cout << &x << endl;
    int *ptr = &x;
    cout << ptr << endl;
    cout << *ptr << endl; // Dereference
    int *null_ptr = nullptr;
    cout << null_ptr << endl;
    cout << *null_ptr << endl; 
}