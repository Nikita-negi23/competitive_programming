//PALINDROME OR NOT FROM STRING WITHOUT REVERSING WHOLE ARRAY;
#include <iostream>
#include<string.h>
using namespace std;

bool palindrome(char name[100])
{
  int i=0;
  int n=strlen(name);
  int j=n-1;
  while(i<=j)
  {
    if(name[i]!=name[j])
    {
      return false;
    }
    else
    {
    i++;
    j--;
    }

  }
  return true;  
}

int main() {
  char name[100];
  cin>>name;
  int a=palindrome(name);
  cout<<a;
  return 0;
}