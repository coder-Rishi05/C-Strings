//38. Read two String user input and check if first contains second?

#include <iostream>
#include <string>

using namespace std;

bool containsSubstring(const string& str, const string& substr) {
    return str.find(substr) != string::npos;
}

int main() {
    string firstString, secondString;

    cout << "Enter the first string: ";
    getline(cin, firstString);

    cout << "Enter the second string: ";
    getline(cin, secondString);

    if (containsSubstring(firstString, secondString)) {
        cout << "The first string contains the second string." << endl;
    } else {
        cout << "The first string does not contain the second string." << endl;
    }
    return 0;
}

/* 
output : 

Enter the first string: things
Enter the second string: good
The first string does not contain the second string.

Enter the first string: stay
Enter the second string: stay
The first string contains the second string.


*/