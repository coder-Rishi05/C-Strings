//15. Program to divide a string in 'N' equal parts.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[30];
	int x;
	cout<<"Enter first string : ";
	gets(str);
	cout<<"Enter number of sub string : ";
	cin>>x;
	int l=strlen(str);
	int i,s;
	cout<<"Sub Strings Are : ";
	if(l%x!=0)
	{
		cout<<endl<<"Cant divide the string";
		return 0;
	}
	s=l/x;
	for(int i=0;i<l;i++)
	{
		if(i%s==0)
		{
			cout<<endl;
		}
		cout<<str[i];
	}
}

/*

output :

Enter first string : moonlight
Enter number of sub string : 3
Sub Strings Are : 
moo
nli
ght

*/
