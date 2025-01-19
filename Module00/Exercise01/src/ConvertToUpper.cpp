// ConvertToUpper.cpp
#include "ConvertToUpper.h"

void ConvertToUpper(std::string& input) {
    // Convert input to uppercase manually using index-based loop
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - ('a' - 'A'); // Convert lowercase to uppercase
        }
    }
}
