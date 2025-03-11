//50. Write a C++ method that accepts three integers and returns true if one is the middle point between the other two integers, otherwise false
#include <iostream>

using namespace std;

int isMiddlePoint(int a, int b, int c);

int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    if (isMiddlePoint(num1, num2, num3))
        cout << "One of the integers is the middle point between the other two." << endl;
    else
        cout << "None of the integers is the middle point between the other two." << endl;

    return 0;
}

int isMiddlePoint(int a, int b, int c) {
    if ((a <= b && b <= c) || (c <= b && b <= a))
        return 1;
    else
        return 0;
}

/* 
output :
Enter three integers: 4 5 6
One of the integers is the middle point between the other two.

Enter three integers: 34 11 67
None of the integers is the middle point between the other two.


*/