//31. Program to print smallest and biggest possible palindrome word in a given string

#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  int n = str.length();
  string smallest, biggest;

  
  for (int i = 0; i < n; ++i) {
    for (int j = i; j < n; ++j) {
      string current = str.substr(i, j - i + 1); 

      int isPalindrome = 1;
      for (int k = 0; k < current.length() / 2; ++k) {
        if (tolower(current[k]) != tolower(current[current.length() - 1 - k])) {
          isPalindrome = 0;
          break;
        }
      }

      if (isPalindrome) {
        if (smallest.empty() || current.length() < smallest.length()) {
          smallest = current;
        }
        if (biggest.empty() || current.length() > biggest.length()) {
          biggest = current;
        }
      }
    }
  }

  if (smallest.empty() && biggest.empty()) {
    cout << "No palindromes found in the string." << endl;
  } else {
    cout << "Smallest palindrome: " << smallest << endl;
    cout << "Biggest palindrome: " << biggest << endl;
  }
  return 0;
}

/* output : 

Enter a string: programme
Smallest palindrome: p
Biggest palindrome: mm

*/