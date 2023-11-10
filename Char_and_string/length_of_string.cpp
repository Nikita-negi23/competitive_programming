//LENGTH OF A STRING;
#include <iostream>
#include<string.h>
using namespace std;

int getlength(char name[])
{
  int length =0,i=0;
  while(name[i]!='\0')
    {
      length++;
      i++;
    }
    return length;
}

int main() {
  char name[100];
  cin>>name;
  int a=getlength(name);
  cout<<"length is : "<<a;

  //PREDEFINED FUNCTIONS

// strlen(name);
// strcpy;
  return 0;
}