//7. Program to check whether a string is a Palindrome

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30],str2[30];
	int c=0;
	cout<<"Enter first string : ";
	cin>>str1;
	int l=strlen(str1);
	strcpy(str2,str1);
	strrev(str2);
	for(int i=0;i<l;i++)
	{
		if(str1[i]==str2[i])
		{
			c++;
		}
		else
		{
			break;
		}
	}
	if(c==l)
	{
		cout<<endl<<"Entered String is Palindrome";
	}
	else
	{
		cout<<endl<<"Entered String is not Palindrome";
	}
}

/*
output : 

Enter first string : jbac

Entered String is not Palindrome


*/
