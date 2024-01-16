// main.cpp
#include <variables.h>
#include <hellouniverse.h>
#include <iostream> // Include the input/output library

int main() // Define the main function
{
    std::cout << "Hello, World!" << std::endl; // Print "Hello, World!" to the standard output stream, followed by a newline
    std::cout << "Hello, Solar System!" << std::endl; //8 planets in solar system apparently
    std::cout << "Hello, Milkyway Galaxy!" << std::endl;
    
    
    // Use the variables defined in variables.h
    variable1 = 3;
    variable2 = 2.618;
    variable3 = 'phi';
    variable4 = 5;
    variable5 = 4.618;
    variable6 = 'phi';    

    // Print the values of the variables
    std::cout << "Variable 1: " << variable1 << std::endl;
    std::cout << "Variable 2: " << variable2 << std::endl;
    std::cout << "Variable 3: " << variable3 << std::endl;
    std::cout << "Variable 4: " << variable4 << std::endl;
    std::cout << "Variable 5: " << variable5 << std::endl;
    std::cout << "Variable 6: " << variable6 << std::endl;
    hellouniverse();
    
    return 0; // Return 0 to indicate successful execution
    
}
