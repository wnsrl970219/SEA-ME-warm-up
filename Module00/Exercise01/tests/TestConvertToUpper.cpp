// test_convert_to_upper.cpp
#include <iostream>
#include <string>
#include "ConvertToUpper.h"  // Include the header file for ConvertToUpper

int main() {
    // Test 1: Basic test with lowercase string
    std::string input = "hello world";
    ConvertToUpper(input);
    std::cout << "Test 1 - Expected: HELLO WORLD, Got: " << input << std::endl;

    // Test 2: Test with already uppercase string
    input = "HELLO WORLD";
    ConvertToUpper(input);
    std::cout << "Test 2 - Expected: HELLO WORLD, Got: " << input << std::endl;

    // Test 3: Test with mixed case string
    input = "Hello World";
    ConvertToUpper(input);
    std::cout << "Test 3 - Expected: HELLO WORLD, Got: " << input << std::endl;

    // Test 4: Test with empty string
    input = "";
    ConvertToUpper(input);
    std::cout << "Test 4 - Expected: , Got: " << input << std::endl;

    return 0;
}
