//Palindrome check
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void reverse(string& str,int n,string& ans)
{
  // Base Case 
  if(n < 0)
  {
     return;
  }
  ans = ans + str[n];
  
  reverse(str,n-1,ans);
}
int main() {
  string str = "racecar";
  int i = 0;
  int n = str.length();
  string ans = "";
  reverse(str,n-1,ans);

  if(str == ans)
    {
      cout << "Yes its a palindrome "; 
    }

    else 
    {
      cout << "Its not a palindrome ";  
    }
  return 0;
}