// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> numbers = {12, 25, 31, 47, 58};
    
    std::vector<int>::iterator ptr = numbers.begin();

    // move with a pointer along the vector
    while (ptr != numbers.end()){
        std::cout << *ptr << " ";
        // move the vector position forward
        ptr = next(ptr,1); 
    }
    std::cout << std::endl << std::endl;

    // move with an indicator along the vector
    int i = 0;
    do{
        std::cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());

    std::cout << std::endl << std::endl;
    return (0);
}
