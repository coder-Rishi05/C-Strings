/*16. Program to find all subsets of a string. */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void findSubsets(const string& str, int index, string current, vector<string>& subsets) {
    if (index == str.length()) {
        subsets.push_back(current);
        return;
    }

    findSubsets(str, index + 1, current + str[index], subsets);

    findSubsets(str, index + 1, current, subsets);
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<string> subsets;
    findSubsets(str, 0, "", subsets);

    cout << "All subsets of \"" << str << "\" are:\n";
    for (const string& subset : subsets) {
        cout << subset << endl;
    }

    return 0;
}

/*
 output :
 All subsets of "abc" are:
        abc
        ab
        ac
        a
        bc
        b
        c
 
*/