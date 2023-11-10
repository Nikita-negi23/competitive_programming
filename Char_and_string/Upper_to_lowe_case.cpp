//UPPER CASE

#include <iostream>
#include<string.h>
using namespace std;

void upper_case(char word[])
{
  int n=strlen(word);
  int i=0;
  while(i<n)
  {
    word[i]=word[i]-32;
    i++;
  }
  cout<<word;

}



int main() {
  char word[50];
  cin>>word;
  upper_case(word);
  return 0;
}