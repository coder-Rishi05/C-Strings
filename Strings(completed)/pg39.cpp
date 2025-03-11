//39. Reverse String Word by Word

#include <iostream>
#include <string>

using namespace std;

string reverseWords(const string& str);

int main() {
  string str = "today is monday";
  string reversed_str = reverseWords(str);
  cout << "Original string: " << str << endl;
  cout << "Reversed string: " << reversed_str << endl;
  return 0;
}

string reverseWords(const string& str) {
  string reversed;
  string word;

  for (char c : str) {
    if (c == ' ') {
      if (!word.empty()) {
        reversed = word + " " + reversed;
        word.clear();
      }
    } else {
      word += c;
    }
  }

  if (!word.empty()) {
    reversed = word + " " + reversed;
  }

  if (reversed[0] == ' ') {
    reversed.erase(0, 1);
  }

  return reversed;
  return 0;
}

/* 
output :

Original string: today is monday
Reversed string: monday is today 

 */