//20. Program to find the duplicate characters in a string

#include <iostream> 
#include <string.h> 
using namespace std;

int main()
{ 
  string str; 
  int count;  
  cout<<"Enter the string : "; 
  getline(cin,str);
  cout<<"Duplicate characters in a given string: \n"; 
  int l=str.length();
  for(int i = 0; i <l; i++) 
  { 
    count = 1;
    for(int j = i+1; j < l; j++) 
	{
      if(str[i] == str[j] && str[i] != ' ') 
	  { 
	      count++; 
		  str[j] = '0'; 
      } 
    }
    if(count > 1 && str[i] != '0') 
       cout<<str[i]<<endl; 
  }
}

/*
output :

Enter the string : chandigarh
Duplicate characters in a given string: 
h
a

*/
