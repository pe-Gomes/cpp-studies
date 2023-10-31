#include <iostream>

// Callable functions must be declared outside of the scope of the main function
int addNumbers(int first, int second)
{
    return first + second;
}

int main()
{
    // Statements can be declared with curly braces or with a single line code with a semicolon at the end.
    int first_number{5}; // Declaration statement
    int second_number = 2;

    std::cout << "The result of " << first_number << " + " << second_number << " = " << addNumbers(first_number, second_number) << std::endl; // Expression statement
    return 0;                                                                                                                                 // Return statement
}