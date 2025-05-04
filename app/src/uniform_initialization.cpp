#include "app/include/uniform_initialization.hpp"

void  Uniform_initialization::init(){
    int a1;                     // Uninitilaized
    int a2 = 0;                 // Copy Initialization
    int a3(5);                  // Direct Initialization
    std::string s1;             // Uninitilaized
    std::string s2("C++");      // Direct Initialization
    char d1[8];                 // Uninitilaized
    char d2[8] = {'\0'};
    char d3[8] = {'a','b'};     // Copy/Aggregate Initialization
    char d4[8] = {"abcd"};      // Copy/Aggregate Initialization
    int b1{};                   // Uniform Value Initialization 
    int b3{5};                  // Uniform Copy Initialization
    char e1[8]{};
    char e2[8]{"Hello"};
    std::cout << a1;
    // std::cout << a2;
    // std::cout << a3;
    // std::cout << s1;
    // std::cout << s2;
    // std::cout << e1;
    // std::cout << e2;
}