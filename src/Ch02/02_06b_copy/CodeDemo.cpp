// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> //standard library
#include <string> 
#include <cstdint>

#define CAPACITY 5000 // will replace CAPACITY for 5000 every time

#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    large += small;
    std::cout << "Large integer is: " << large << std::endl;
#endif

    std::cout << std::endl << std::endl;
    return (0);
}
