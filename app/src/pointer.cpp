#include <iostream>
using namespace std;

int main(){
    int x = 5;
    // int *p;
    // p = &x;
    int *p = &x;
    cout << p << "\t"<<*p<<endl;

    int y = 10;
    int *q ;
    cout << q << "\t"<<endl;

    int *r ;
    r = nullptr;
    cout << r << "\t"<<endl;

    int **s;
    s = &p;
    cout << s << "\t"<<*s<<"\t"<<**s<<endl;

    int A[5]{};
    int *t = A;
    cout << A[2]<<endl;
    cout << *(t+2)<< endl;
    cout << t << "\t"<<*t<<endl;

    int B[2][3];
    int (*u) [3] = B;
    cout << B[0]<<endl;
    cout << *(u+0)<< endl;
    cout << B[1]<<endl;
    cout << *(u+1)<< endl;
    cout << &B[1][2]<<endl;
    cout << *(u+1)+2<< endl;
    cout << B[1][2]<<endl;
    cout << *(*(u+1)+2)<< endl;
}