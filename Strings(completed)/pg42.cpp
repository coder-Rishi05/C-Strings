//42. Write a C++ method to count all words in a string

#include <iostream>
#include <cstring>
#include<string.h>
using namespace std;

int main() {
  char str[100];
  int count = 0;
  int word = 0;  
  cout<<"Enter a string: ";
  gets(str);

    int length;
    length= strlen(str);

  for (int i = 0; i < length; i++) {
    if (isspace(str[i])) {
      word = 0; 
    } else if (!word) {
      word = 1;  
      count+=1;
    }
  }

  if (word) {
    count+=1;  
  }

  cout << "Number of words in the string is: "<<count-1<<endl;
  return 0;
}

/* output :

Enter a string: know well
Number of words in the string is: 2

 */