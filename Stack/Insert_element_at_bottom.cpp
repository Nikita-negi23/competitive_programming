// INSERT AT BOTTOM
#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int target)
{
  //Recursion //Base Case
  if(s.empty())
  {
    s.push(target);
    return;
  }

  int ans;
  ans = s.top();
  s.pop();
  insertAtBottom(s,target);
  // Backtrekking
  s.push(ans);
}
int main() {
  int target = 11;
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  insertAtBottom(s,target);

  while(!s.empty())
  {
    cout<<s.top() << endl;
    s.pop();
  }
  return 0;
}