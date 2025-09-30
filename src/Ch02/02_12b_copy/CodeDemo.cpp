// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// use ENUM as in C#

// enum cow_purpose {dairy, meat, hide, pet};

// enum grocery_section {canned, frozen, meat, laundry, dairy, bakery};

// use enum CLASS as in C++
enum class cow_purpose {dairy, meat, hide, pet};

int main(){
    // int meat = 8;
    cow_purpose a;

    a = cow_purpose::meat;

    std::cout << "a = " << (int) a << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
