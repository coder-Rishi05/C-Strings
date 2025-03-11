//9. Program to count number of words in a String?

#include<iostream>

#include<string.h>
using namespace std;

int main()
{
	char a[100];
	int i,count=1;
	cout<<"Enter a string:";
	gets(a);
	for(i=0;a[i]!='\0';++i)
	{
		if(a[i]==' ')
		count++;
	}
	cout<<"\nThere are "<<count<<" words in the given string";
}

/*

output :
Enter a string:Basic c

There are 2 words in the given string

*/
