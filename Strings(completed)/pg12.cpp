//12. Program to count the total number of vowels and consonants in a string

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	int v=0,c=0;
	cout<<"Enter first string : ";
	cin>>str;
	int l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
		{
			v++;
		}
		else
		{
			c++;
		}
	}
	cout<<endl<<"Number of vowels on String : "<<v;
	cout<<endl<<"Number of consonants in String : "<<c;
}

/*

output :

Enter first string : kim

Number of vowels on String : 1
Number of consonants in String : 2

*/
