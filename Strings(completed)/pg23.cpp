//23. Program to find the largest and smallest word in a string

#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  string largest, smallest;
  int currentWordLength = 0;

  cout << "Enter a string: ";
  getline(cin, str);

  for (char c : str) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
      currentWordLength++;
    } else if (currentWordLength > 0) {
      if (currentWordLength > largest.length()) {
        largest = str.substr(str.rfind(c, currentWordLength - 1) + 1, currentWordLength);
      }
      if (smallest.empty() || currentWordLength < smallest.length()) {
        smallest = str.substr(str.rfind(c, currentWordLength - 1) + 1, currentWordLength);
      }
      currentWordLength = 0;
    }
  }

  if (currentWordLength > 0) {
    largest = str.substr(str.length() - currentWordLength);
    if (smallest.empty() || currentWordLength < smallest.length()) {
      smallest = str.substr(str.length() - currentWordLength);
    }
  } else if (smallest.empty()) {
    cout << "No words found in the string." << endl;
    return 0;
  }

  cout << "Largest word: " << largest << endl;
  cout << "Smallest word: " << smallest << endl;

  return 0;
}

/*

output :
Enter a string: one, two, three, eight
Largest word: eight
Smallest word: one

*/
