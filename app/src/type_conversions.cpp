#include <iostream>
using namespace std;
class Integer{
    int x;
    public:
        Integer(int a): x(a) {}

};

int main()
{
    int a =5,b=2;
    float f = static_cast<float>(a)/b;
    // char *p = &a; //error: cannot convert 'int*' to 'char*' in initialization
    char *p = reinterpret_cast<char*>(&a);
    cout<<f;


    Integer a1{5};


}
