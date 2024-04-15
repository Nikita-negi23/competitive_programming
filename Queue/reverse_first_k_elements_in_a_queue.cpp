#include <iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

int main() {
  stack<int> s;
  queue<int> q;
  int k = 3;
  q.push(3);
  q.push(6);
  q.push(9);
  q.push(12);
  q.push(15);
  int n=q.size()-k;

  for(int i=0;i<k;i++)
  {
    s.push(q.front());
    q.pop();
  }
  while(!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
  for(int i=0;i<n;i++)
  {
    q.push(q.front());
    q.pop();
  }
  while(!q.empty())
  {
    cout<<q.front()<<endl;
    q.pop();
  }
  return 0;
}