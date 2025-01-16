#include "ConvertToLower.h"

void ConvertToLower(std::string& input) {
    // Convert input to lowercase manually using index-based loop
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] + ('a' - 'A'); // Convert uppercase to lowercase
        }
    }
}
