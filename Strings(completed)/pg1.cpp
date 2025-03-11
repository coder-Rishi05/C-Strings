/* 1. Program to Check Anagram

Explanation -

Two Strings are called the anagram if they contain the same characters. However, the order or sequence of the characters can be different.*/

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30],str2[30];
	cout<<"Enter first string : ";
	cin>>str1;
	cout<<"Enter second string : ";
	cin>>str2;
	int l1=strlen(str1);
	int l2=strlen(str2);
	int c=0;
	if(l1==l2)
	{
		for(int i=0;i<l1;i++)
		{
			if(str1[i]==str2[i])
			{
				c++;
			}
		}
		if(c==l1)
		{
			cout<<endl<<"Strings are Anagram";
		}
		else
		{
			cout<<endl<<"Strings are not Anagram";
		}
	}
	else
	{
		cout<<endl<<"String are not Anagram";
	}
}

/*
output:

Enter first string : rishi
Enter second string : rishabh

String are not Anagram

Enter first string : rishabh
Enter second string : rishabh

Strings are Anagram

*/
