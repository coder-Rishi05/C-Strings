//26. Program to find the number of the words in the given text file

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    int words = 0;
    cout << "Enter the string : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; str[i] != ' ' && str[i] != '\0'; i++, j++)
            continue;
        if (str[i + 1] != ' ')
            words++;
    }
    cout << "Number of words in string : " << words << endl;
    return 0;
}

/* 
output :

Enter the string : closing
Number of words in string : 1

Enter the string : wait there
Number of words in string : 2

 */
