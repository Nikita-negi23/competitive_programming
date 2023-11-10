//REVERSE OF A STRING;
//BY TWO POINTER APPROACH FROM SWAPPING CONCEPT;
#include <iostream>
#include<string.h>
using namespace std;

void reverse(char name[100])
{
  int i=0;
  int n=strlen(name);
  int j=n-1;
  while(i<=j)
  {
    int temp=name[i];
    name[i]=name[j];
    name[j]=temp;
    i++;
    j--;

  }
  cout<<name<<endl;

  
}

int main() {
  char name[100];
  cin>>name;
  reverse(name);
  return 0;
}