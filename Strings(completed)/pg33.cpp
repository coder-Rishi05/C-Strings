//33. Program to replace lower-case characters with upper-case and vice-versa

#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
  char ch;

  cout<<"Enter a character: ";
  cin>>ch;

  if (isalpha(ch)) {
    if (islower(ch)) {
      ch = toupper(ch);
      cout<<"Converted character (uppercase): "<<ch<<endl;
    } else {
      ch = tolower(ch);
      cout<<"Converted character (lowercase): "<<ch<<endl;
    }
  } else {
    cout<<"Input is not an alphabet."<<endl;
  }
  return 0;
}

/* 
output :

Enter a character: a
Converted character (uppercase): A

Enter a character: a
Converted character (uppercase): A


 */