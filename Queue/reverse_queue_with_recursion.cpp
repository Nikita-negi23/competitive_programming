// Reversing a queue with the help of stack and recursion.
#include <iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void solve(stack<int> s,queue<int> q)
{
  //base case
  if(q.empty())
  {
    return;
  }
  s.push(q.front());
  q.pop();
  solve(s,q);
  cout<<s.top()<<endl;
}

int main() {
  stack<int> s;
  queue<int> q;
  q.push(3);
  q.push(6);
  q.push(9);
  q.push(2);
  q.push(8);
  
  solve(s,q);
  return 0;
}