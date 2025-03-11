/* 17. Program to find all the permutations of a string. */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void findPermutations(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }

    for (int i = left; i <= right; i++) {
       
        swap(str[left], str[i]);
       
        findPermutations(str, left + 1, right);
      
        swap(str[left], str[i]);
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length();
    cout << "All permutations of \"" << str << "\" are:\n";
    findPermutations(str, 0, n - 1);

    return 0;
}

/* 
output :

Enter a string: abc
All permutations of "abc" are:
abc
acb
bac
bca
cba
cab

*/