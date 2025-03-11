//19. Program to find Reverse of the string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	cout<<"Enter first string : ";
	gets(str);
	strrev(str);
	cout<<endl<<"Reverse of String : "<<str;
}

/*
output :

Enter first string : home

Reverse of String : emoh

*/
