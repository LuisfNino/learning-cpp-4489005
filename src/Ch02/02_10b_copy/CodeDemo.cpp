// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt = -7.66;
    sgn = flt;
    usgn = sgn;

    // print their times
    std::cout << flt << std::endl;
    std::cout << sgn << std::endl;
    std::cout << (int32_t) usgn << std::endl; // usgn ist casted to a int32_t


    std::cout << std::endl << std::endl;
    return (0);
}
