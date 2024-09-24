#include <iostream>

inline int a(int b){
    std::cout << b;
    return b;
}



int main(){
    int b = 10;
    int c = a(b);
    std::cout << c;
}

