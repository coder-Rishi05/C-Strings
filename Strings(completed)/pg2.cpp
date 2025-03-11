//2. Program to Swapping Pair of Characters

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30],str1[30],f,r;
	int l;
	cout<<"Enter a String : ";
	cin>>str;
	cout<<"Enter a character to find and replace : ";
	cin>>f;
	cout<<"Enter a character to replace with : ";
	cin>>r;
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(f==str[i])
		{
			str1[i]=r;
		}
		else
		{
			str1[i]=str[i];
		}
	}
	cout<<endl<<"String after replacing character : "<<str1;
}

/*
output:
Enter a String : rishi
Enter a character to find and replace : i
Enter a character to replace with : a

String after replacing character : rasha
*/
