#include <cstdint>
#include <iostream>
#include <string>
#include "ConvertToUpper.h"  // Include the header file for the ConvertToUpper function
#include "ConvertToLower.h"  // Include the header file for the ConvertToLower function

auto main() -> int32_t {
    std::string input;

    // Ask the user to input their name
    std::cout << "Please write your name: ";
    std::getline(std::cin, input);  // Get the user's input

    // Ask whether to convert to uppercase or lowercase
    char choice;
    std::cout << "Upper (u) or lower (l)? ";
    std::cin >> choice;  // Get the user's choice for uppercase or lowercase

    // Clear the newline character left in the input buffer
    std::cin.ignore();

    // Based on the user's choice, convert the string accordingly
    if (choice == 'u' || choice == 'U') {
        ConvertToUpper(input);  // Convert to uppercase
        std::cout << "You entered (uppercase): " << input << std::endl;
    } else if (choice == 'l' || choice == 'L') {
        ConvertToLower(input);  // Convert to lowercase
        std::cout << "You entered (lowercase): " << input << std::endl;
    } else {
        std::cout << "Invalid choice! Please enter 'u' for uppercase or 'l' for lowercase." << std::endl;
    }

    return 0;
}
