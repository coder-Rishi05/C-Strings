//4. Program to perform Deep Copy for String?

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30],str2[30];
	cout<<"Enter first string : ";
	cin>>str1;
	int l=strlen(str1);
	for(int i=0;i<l;i++)
	{
		str2[i]=str1[i];
	}
	cout<<endl<<"Copied String : "<<str2;
}

/*
output:

Enter first string : abcde

Copied String : abcde

*/
