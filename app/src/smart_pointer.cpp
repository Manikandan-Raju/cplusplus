#include <iostream>
#include <memory>
using namespace std;

class Emp
{
public:
    Emp() { cout << "Emp Ctor called\n"; }
    ~Emp() { cout << "Emp dtor called\n"; }
    void show() { cout << "show called\n"; }
};

int main()
{
    // Emp *ptr = new Emp();
    unique_ptr<Emp> ptr(new Emp());
    ptr->show();
}
