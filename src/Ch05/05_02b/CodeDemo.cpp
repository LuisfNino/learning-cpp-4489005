// Learning C++ 
// Exercise 05_02
// Function Parameters, by Eduardo Corpeño 

#include <iostream>

// passing arguments by value
int square (int x) {
    x = x*x;
    return x;
}

// passing arguments by pointer
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

// passing arguments by reference
void swap (int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 9, b;
    // TODO: square
    b = square (a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap (&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    swap(a,b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
