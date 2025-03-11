//3. Program to Check if a String contains only digits

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	int l,c=0;
	cout<<"Enter a string : ";
	cin>>str;
	l=strlen(str);
	for(int i=0;i<l;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			c++;
		}
	}
	if(c==l)
	{
		cout<<endl<<"String contains only digits";
	}
	else
	{
		cout<<endl<<"String contains digits also";
	}
}

/*
output:

Enter a string : 56Ab

String contains digits also

Enter a string : 165

String contains only digits

*/
