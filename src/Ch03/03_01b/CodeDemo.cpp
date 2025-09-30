// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

// use enum class
enum class cow_purpose {dairy, meat, hide, pet};

// declare a struct, with different data types
struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    
    // create struct and define it
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;

    std::cout << my_cow.name << std::endl;
    std::cout << my_cow.age << std::endl;
    std::cout <<  (int) my_cow.purpose << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
