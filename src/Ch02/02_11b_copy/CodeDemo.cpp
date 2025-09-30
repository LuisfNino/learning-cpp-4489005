// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    int fahrenheit = 100;
    int celsius;

    celsius = ((float)5/9) * (fahrenheit -32); //explicitly cast the 5 to float

    std::cout << fahrenheit << std::endl;
    std::cout << celsius << std::endl;

    float weight = 10.99;

    std::cout << weight << std::endl;
    std::cout << (int16_t) weight << std::endl;
    std::cout << (int16_t) ((weight - (int32_t) weight)*10000) << std::endl; // cast it to int
    std::cout << ((weight - (int32_t) weight)*10000) << std::endl; //remains a float

    std::cout << std::endl << std::endl;
    return (0);
}
