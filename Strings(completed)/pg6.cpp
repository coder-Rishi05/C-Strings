//6. Program to Add Characters to a String

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str1[30],str2[30],c;
	int id,j=0;
	cout<<"Enter first string : ";
	cin>>str1;
	cout<<"Enter a character to add : ";
	cin>>c;
	cout<<"Enter index to add : ";
	cin>>id;
	int l=strlen(str1);
	for(int i=0;i<l;i++)
	{
		if(i==(id-1))
		{
			str2[j]=c;
			j++;
			str2[j]=str1[i];
		}
		else
		{
			str2[j]=str1[i];
		}
		j++;
	}
	cout<<endl<<"String after adding character "<<c<<" : "<<str2;
}

/*

Enter first string : rish
Enter a character to add : i
Enter index to add : 5

String after adding character i : rishi

*/
