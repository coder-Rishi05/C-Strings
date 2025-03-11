//35. Program to separate the Individual Characters from a String

#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout<<"Enter string: ";
    cin>>str;
    
    cout<<"Individual characters in the string is: ";
    for (size_t i = 0; i < str.length(); ++i) {
        cout<<str[i]<<" ";
    }
    cout<<endl;

    return 0;
}

/* output :

Enter string: down
Individual characters in the string is: d o w n 


*/