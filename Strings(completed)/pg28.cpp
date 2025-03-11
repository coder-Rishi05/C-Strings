//28. Program to Insert a string into another string

#include <iostream>
using namespace std;

int main()
{
    int a;
    string str, i;
    cout << "Enter the string : ";
    getline(cin, str);
    cout << "Enter the string which you want to insert : ";
    getline(cin, i);
    cout << "Enter the position where you want to insert : ";
    cin >> a;
    str.insert(a - 1, i);
    cout << "Resulting String : " << str << endl;
}

/*

output :

Enter the string : kingfishr
Enter the string which you want to insert : i
Enter the position where you want to insert : 7
Resulting String : kingfiishr

*/