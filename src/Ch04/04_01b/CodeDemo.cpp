// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1023;
    bool flag = false;
    char lttr = 'd';

    if (a > 1000)
        std::cout << "Warning: " << std::endl;

    if (a % 2)
        std::cout << "Odd number" << std::endl;
    else
        std::cout << "Even number" << std::endl;

    if (lttr != 'a' && lttr != 'e' && lttr != 'i' && lttr != 'o' && lttr != 'u')
        std::cout << "Not vowel" << std::endl;

    if (flag)
        std::cout << "is true" << std::endl;
    else
        std::cout << "is flase" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
