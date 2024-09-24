#include <iostream>
#include <cmath>

namespace a{
    int b = 10;
}

using namespace std;  //implicit namespace
using namespace a;  //implicit namespace

int pressure = 10;

int main()
{
    int pressure = 20;
    cout << "local" <<  pressure;
    cout << "global" << ::pressure;
    cout << "name" << b;
    int num = 10;
    cin >> num; //extraction operator
    cout << num;
}