#include <iostream>
using namespace std;

int Add(int *a,int *b);
void AddVal(int *a,int *b,int * result);
void Swap(int *a,int *b);
void Factorial(int *a,int *result);

int main(){

    int *a = new int(5);
    int *b = new int(10);

    // int *a = new int;
    // int *b = new int;
    // *a = 5;
    // *b = 10;

    // int x = 5,y = 10;
    // int* a = &x;
    // int*b = &y;

    int *result = new int;


    cout << Add(a,b)<<endl;

    AddVal(a,b,result);
    Swap(a,b);
    cout << *result<<endl;
    cout << *a<<"\t"<<*b<<endl;
    *result = 1;
    Factorial(b,result);
    cout << *result<<endl;

}

int Add(int *a,int *b){
    return *a + *b;
}

void AddVal(int *a,int *b,int * result){
    *result =  *a + *b;
}

void Swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Factorial(int *a,int *result){
    if (*a == 0 || *a == 1){
        return;
    }
    else{
        *result *= *a;
        *a -= 1;
        Factorial(a,result);
    }
}