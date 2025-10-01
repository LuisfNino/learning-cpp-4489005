// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

// Vectors are dynamic-size containers
// Memory is managed for you

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> primes;
    primes.push_back(2);
    primes.push_back(3);

    std::cout << "vectors size is: " << primes.size() << std::endl;

    primes[0] = 13;

    std::cout << primes[0] << std::endl;
    std::cout << primes[1] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
