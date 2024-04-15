// Interleave first and second half of queue
#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

int main() {
  queue<int> q;
  queue<int> q1;
  queue<int> ans;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  q.push(70);
  q.push(80);
  int size = q.size();
  int n = size/2;

  for(int i=0;i<n;i++)
  {
    q1.push(q.front());
    q.pop();
  }

  for(int i=0;i<n;i++)
  {
    ans.push(q1.front());
    ans.push(q.front());
    q.pop();
    q1.pop();
  }
  while(!ans.empty())
  {
    cout<<ans.front()<<endl;
    ans.pop();
  }
  return 0;
}