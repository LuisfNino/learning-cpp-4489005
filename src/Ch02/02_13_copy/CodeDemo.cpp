// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 

    // Write your code here
    result += nums[0];
    result += nums[1];
    result += nums[2];
    result += nums[3];
    result += nums[4];
    result /= sizeof(nums)/sizeof(nums[0]);

    // NOTE: sizeof(nums) returns the bytes, not the element count

    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
