//Reverse a string Recursively
//Method used - Swapping
#include <iostream>
#include<string>
using namespace std;

void reverse(string str,int i,int n,int end)
{
  // Base Case 
  if(i > end)
  {
    return;
  }
  cout << str[n] <<" ";
  reverse(str,i+1,n-1,end);
}
int main() {
  string str = "Nikita";
  int i = 0;
  int n = str.length();
  int end = str.length();
  reverse(str,i,n-1,end);
  return 0;
}