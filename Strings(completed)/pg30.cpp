//30. Program to Print even length words.

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    string Word = "";
    for (int i= 0; i<str.length(); ++i) {
        if (str[i] == ' ' || i == str.length() - 1) {
            if (Word.length() % 2 == 0 && Word.length() != 0) {
                cout<<Word<<endl;
            }
            Word = "";
        } else {
            Word+=str[i];
        }
    }
    return 0;
}

/* 
output :

Enter a string: elephant eats
Even-length words:
elephant
eats

*/