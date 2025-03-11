//37. Program to swap two string variables without using third or temp variable.

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str1[] = "Hello";
  char str2[] = "World";

  cout << "Before swap: str1 = " << str1 << ", str2 = " << str2 << endl;

  if (strlen(str1) < strlen(str2)) {
   
  }

  for (int i = 0; i < strlen(str1); i++) {
    char temp = str1[i];
    str1[i] = str2[i];
    str2[i] = temp;
  }

  cout << "After swap: str1 = " << str1 << ", str2 = " << str2 << endl;

  return 0;
}

/* 
output : 

Before swap: str1 = Hello, str2 = World
After swap: str1 = World, str2 = Hello

*/
