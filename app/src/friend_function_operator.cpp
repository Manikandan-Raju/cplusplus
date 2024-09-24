#include <iostream>
using namespace std;

class Beta;// forward declaration
    class Alpha
{
    int a;

public:
    Alpha() { a = 10; }
    // friend void compare(Alpha &, Beta &);
    friend void operator ==(Alpha &, Beta &);
    
};

class Beta
{
    int b;

public:
    Beta() { b = 10; };
    // friend void compare(Alpha &, Beta &);
    friend void operator ==(Alpha &, Beta &);
};

// void compare(Alpha &arg1, Beta &arg2)
// {
//     if (arg1.a == arg2.b)cout << "YEs\n";
//     else cout << "No\n";
// }

void operator ==(Alpha &arg1,Beta &arg2)
{
    if (arg1.a == arg2.b)cout << "YEs\n";
    else cout << "No\n";
}
int main()
{
    Alpha aob;
    Beta bob;
    aob == bob;
}
