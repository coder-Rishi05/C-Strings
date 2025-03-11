//10. Program to count the total number of characters in a string.


#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30];
	cout<<"Enter first string : ";
	gets(str1);
	int i,c=0;
	for(i=0;str1[i]!='\0';++i)
	{
		c++;
	}
	cout<<"\nThere are "<<c<<" characters in the given string";
 
}

/*
output :

Enter first string : character

There are 9 characters in the given string

*/
