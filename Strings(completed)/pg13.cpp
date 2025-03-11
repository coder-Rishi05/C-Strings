/*13. Program to determine whether a given string is palindrome. */

#include <iostream>
#include <string>
#include <cctype>

bool is_palindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        
        while (!std::isalnum(str[left]) && left < right) {
            left++;
        }
        while (!std::isalnum(str[right]) && left < right) {
            right--;
        }

        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input_string;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input_string);

    if (is_palindrome(input_string)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

/* output

Enter a string: lion
The string is not a palindrome.

Enter a string: abba

The string is a palindrome.

*/