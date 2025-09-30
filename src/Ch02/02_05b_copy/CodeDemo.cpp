// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8; // int
    auto b = 112435465464; // long
    auto c = 3.14f; // float
    auto d = 3.14; // double 
    auto e = true; // bool
    auto f = 'd'; // char
    auto g = "C++ rocks"; // pointer to const char, so a string

    std::cout << "The type is: " << typeid(a).name() << std::endl;
    std::cout << "The type is: " << typeid(b).name() << std::endl;
    std::cout << "The type is: " << typeid(c).name() << std::endl;
    std::cout << "The type is: " << typeid(d).name() << std::endl;
    std::cout << "The type is: " << typeid(e).name() << std::endl;
    std::cout << "The type is: " << typeid(f).name() << std::endl;
    std::cout << "The type is: " << typeid(g).name() << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
