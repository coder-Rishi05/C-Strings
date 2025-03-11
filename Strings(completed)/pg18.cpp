//18. Program to find maximum and minimum occurring character in a string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	cout<<"Enter first string : ";
	gets(str);
	int l=strlen(str);
	char ans;
	int freq[26]={0},max=-1,i;
	for(i=0;i<l;i++)
	{
		freq[str[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(max<freq[i])
		{
			max=freq[i];
			ans=(char)(i+'a');
		}
	}
	cout<<endl<<"Maximum occuring character : "<<ans;
}

/*
output :

Enter first string : queen

Maximum occuring character : e

*/
