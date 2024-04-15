// Reversing a queue with the help of stack.
#include <iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

int main() {
  stack<int> s;
  queue<int> q;
  q.push(3);
  q.push(6);
  q.push(9);
  q.push(2);
  q.push(9);
  
  while(!q.empty())
  {
    s.push(q.front());
    q.pop();
  }

  while(!s.empty())
  {
    q.push(s.top());
    s.pop();
  }
  cout<<"Reverse order is : "<<endl;
  while(!q.empty())
  {
    cout<<q.front()<<endl;
    q.pop();
  }
  return 0;
}