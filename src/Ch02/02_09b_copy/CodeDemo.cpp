// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string> // to include string class
#include <cstring> // to handle character array strings

int main(){
    
    // AS CHAR
    const size_t LENGTH1 = 25;
    char array_str1[LENGTH1] = "Hey guys. ";
    char array_str2[] = "What's up?";

    strncat(array_str1, array_str2, LENGTH1); // array_str1 is modified
    std::cout << array_str1 << std::endl << std::endl;

    // AS STRING CLASS
    std::string std_str1 = "Hey guys 2. ";
    std::string std_str2 = "What's up 2?";

    std::cout << std_str1 + std_str2 << std::endl; // array_str1 is not modified

    std::cout << std::endl << std::endl;
    return (0);
}
