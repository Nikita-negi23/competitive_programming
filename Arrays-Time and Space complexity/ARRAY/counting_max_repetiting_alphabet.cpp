#include <iostream>
#include<string.h>
using namespace std;

int main() {
  string str;
  int len;
  int max=0;
  char var;
  //bool flag=true;
  //int arr[10];
  cout<<"Enter the name : ";
  cin>>str;
  len=str.length();
  for(int i=0;i<len;i++)
  {
    int count=1;
    for(int j=i+1;j<len;j++)
    {
      if(str[i]==str[j])
      {
        count++;
      }
      if(count>max)
      {
        max=count;
        var=str[i];
      }
    }
    //arr[i]=count;
    //cout<<"count of "<<str[i]<<" is : "<<count<<endl;
  }
  cout<<"count of "<<var<<" is : "<<max<<endl;
  return 0;
}