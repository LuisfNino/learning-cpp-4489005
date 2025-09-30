// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>
// #define AGE_LENGTH 4

int main(){
    const size_t AGE_LENGTH = 4; // size_t is the appropriate data type for sizes

    int age[AGE_LENGTH]; // 4 elements from 0 to 3 index

    float temperature[] = {20.0, 21.0, 22.0}; // auto does not work for arrays

    age[0] = 25;
    age[1] = 26;
    age[2] = 27;
    age[3] = 28;

    std::cout << "Age length: " << AGE_LENGTH << std::endl;

    std::cout << "Age content:" << age[0] << std::endl;
    std::cout << "Age content:" << age[1] << std::endl;
    std::cout << "Age content:" << age[2] << std::endl;
    std::cout << "Age content:" << age[3] << std::endl << std::endl;

    std::cout << "Temperature:" << temperature[0] << std::endl;
    std::cout << "Temperature:" << temperature[1] << std::endl;
    std::cout << "Temperature:" << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
