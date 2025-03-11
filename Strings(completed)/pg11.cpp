//11. Program to count the total number of punctuation characters exists in a String

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30];
	int p=0;
	cout<<"Enter first string : ";
	cin>>str1;
	int l=strlen(str1);
	for(int i=0;i<l;i++)
	{
		if(str1[i]==',' || str1[i]=='!' || str1[i]=='.' || str1[i]==';')
		{
			p++;
		}
	}
	cout<<endl<<"Number of punchuations in string : "<<p;
}

/*
output :

Enter first string : hi,there,yes

Number of punchuations in string : 2

*/
