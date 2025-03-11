//14. Program to determine whether one string is a rotation of another

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30],str2[30];
	int c=0;
	cout<<"Enter first string : ";
	gets(str1);
	cout<<"Enter second string : ";
	gets(str2);
	int l1=strlen(str1);
	int l2=strlen(str2);
	if(str1==str2)
	{
		for(int i=0;i<l1;i++)
		{
			if(i==(l1-1))
			{
				if(str2[l1-1]==str1[0])
				{
					c++;
				}
			}
			else
			{
				if(str1[i]==str2[i+1])
				{
					c++;
				}
				else
				{
					break;
				}
			}
		}
		if(c==l1)
		{
			cout<<endl<<"String is rotation of Another";
		}
		else
		{
			cout<<endl<<"String is not rotation of Another";
		}
	}
	else
	{
		cout<<endl<<"String is not rotation of Another";
	}
}

/*
output :

Enter first string : one
Enter second string : one

String is not rotation of Another

*/
