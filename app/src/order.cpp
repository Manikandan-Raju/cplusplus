#include <iostream>
using namespace std;

class A  {
    public:
    A(){
        cout << "con of A\n";
    }
    ~A(){
        cout << "des of A\n";
    }
};

// class B{
//     public:
//     B(){
//         cout << "con of B\n";
//     }
//     ~B(){
//         cout << "des of B\n";
//     }
// };

// class C: public B,A{
//     public:
//     C(){
//         cout << "con of C\n";
//     }
//     ~C(){
//         cout << "des of C\n";
//     }
// };

class B: virtual public A{
    public:
    B(){
        cout << "con of B\n";
    }
    ~B(){
        cout << "des of B\n";
    }
};

class C: public virtual A{
    public:
    C(){
        cout << "con of C\n";
    }
    ~C(){
        cout << "des of C\n";
    }
};

class D: public B,C{
    public:
    D(){
        cout << "con of D\n";
    }
    ~D(){
        cout << "des of D\n";
    }
};

// class D: public C{
//     public:
//     D(){
//         cout << "con of D\n";
//     }
//     ~D(){
//         cout << "des of D\n";
//     }
// };


int main(){
    D d;
}