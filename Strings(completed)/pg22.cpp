//22. Program to find the frequency of characters

#include <iostream>
using namespace std;

int main()
{
    string s;
    string cha;
    char ch;
    cout << "Enter the string : ";
    getline(cin, s);
    int count[100], c = 1, m = 0, flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        ch = s[i];
        for (int j = 0; j < cha.length(); j++)
        {
            if (ch == cha[j])
                flag = 0;
        }
        if (flag != 0)
        {
            cha.append(1, s[i]);
            for (int k = 0; k < s.length(); k++)
            {
                if (k != i)
                    if (ch == s[k])
                        c++;
            }
            count[m] = c;
            c = 1;
            m++;
        }
        flag = 1;
    }
    cout << "Frequency of characters: " << endl;
    for (int i = 0; i < cha.length(); i++)
    {
        cout << "character : " << cha[i] << " "
             << " , with count : " << count[i] << endl;
    }
}

/*
output :

Enter the string : frequency
Frequency of characters: 
character : f  , with count : 1
character : r  , with count : 1
character : e  , with count : 2
character : q  , with count : 1
character : u  , with count : 1
character : n  , with count : 1
character : c  , with count : 1
character : y  , with count : 1

*/
