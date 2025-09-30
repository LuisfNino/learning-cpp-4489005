// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>
#include <stdint.h>

// declare global variables and initialize one to 5
int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "Hi There!" << std::endl;

    // print them
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    // change the flag and print some more
    my_flag = true;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    // create unsigned variable and print it
    // unsigned int positive;
    uint32_t positive;
    positive = b - a;
    std::cout << "positive = " << positive << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
