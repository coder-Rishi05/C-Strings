//5. Program to remove all occurrences of a given character from input String

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30],str2[30],c;
	int j=0;
	cout<<"Enter first string : ";
	cin>>str1;
	cout<<"Enter a character to remove : ";
	cin>>c;
	int l=strlen(str1);
	for(int i=0;i<l;i++)
	{
		if(str1[i]==c)
		{
			continue;
		}
		else
		{
			str2[j]=str1[i];
			j++;
		}
	}
	cout<<endl<<"String after removing character "<<c<<" : "<<str2;
}

/*
output :

Enter first string : Aman
Enter a character to remove : a

String after removing character a : Amnv
*/
