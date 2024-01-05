// main.cpp
#include "variables.h"
#include <iostream> // Include the input/output library

int main() // Define the main function
{
    std::cout << "Hello, World!" << std::endl; // Print "Hello, World!" to the standard output stream, followed by a newline
    
    // Use the variables defined in variables.h
    variable1 = 3;
    variable2 = 2.62;
    variable3 = 'phi';

    // Print the values of the variables
    std::cout << "Variable 1: " << variable1 << std::endl;
    std::cout << "Variable 2: " << variable2 << std::endl;
    std::cout << "Variable 3: " << variable3 << std::endl;

    
    return 0; // Return 0 to indicate successful execution
    
}
