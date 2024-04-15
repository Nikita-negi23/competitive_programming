#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main() {
  char ch;
  string str = "ababca";
  map<char,int> m;
  for(int i=0;i<str.length();i++)
  { 
    ch=str[i];
    // by defalut frequency 0 hoti hai.
    m[ch]++;
  }

  for(auto i:m)
  {
    cout<<i.first<<"->"<<i.second<<endl;
  }
  return 0;
}