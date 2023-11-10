//REPLACE ALL SPACES IN A STRING WITH @;

#include<iostream>
#include<string.h>
using namespace std;

void replace(char sentance[])
{
  int i=0;
  while(sentance[i]!='\0')
  {
    if(sentance[i]==' ')
    {
      sentance[i]='@';

    }
    i++;
  } 
  cout<<sentance<<endl;
} 

int main() {
  char sentance[100];
  cin.getline(sentance,100);
  replace(sentance);
  return 0;
}