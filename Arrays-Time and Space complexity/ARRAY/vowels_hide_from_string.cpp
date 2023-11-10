//replacing vowels from string;
#include<iostream>
#include <stdio.h>
#include<string.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string : "<<endl;
    getline(cin, str);
    int len=str.length();
    cout<<"legth is : "<<len<<endl;
    
    for(int i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            str[i]=' ';
        }
    }
    
    cout<<str;
    return 0;
}
