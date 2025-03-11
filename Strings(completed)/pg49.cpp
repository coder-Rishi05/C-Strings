//49. Write a C++ method to display the current date and time.

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
    cout<<"The Current Date is: "<<__DATE__<<endl;
    cout<<"The Current Time is: "<<__TIME__<<endl;
    return 0;
}

/* 
output :

The Current Date is: Apr  7 2024
The Current Time is: 14:22:22



*/