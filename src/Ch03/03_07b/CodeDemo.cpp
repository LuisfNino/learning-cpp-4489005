// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

// pointers to dynamically allocate memory for new objects when calling the class constructor and freeing the memory when the objects are no longer needed

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    // object dynamically created
    cow *my_cow; 
    my_cow = new cow("Hildy", 7, cow_purpose::pet);
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;

    // delete object to when no longer needed to avoid memory leakage
    delete my_cow; 
    
    std::cout << std::endl << std::endl;
    return (0);
}
