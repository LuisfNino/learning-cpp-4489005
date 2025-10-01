// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    std::cout << "content of a: " << a << std::endl;
    std::cout << "address of a: " << &a << std::endl << std::endl;
    std::cout << "content of ptr: " << ptr << std::endl;
    std::cout << "address of ptr: " << &ptr << std::endl;
    std::cout << "content of where ptr is pointing: " << *ptr << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
