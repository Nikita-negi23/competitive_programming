//MIDDLE ELEMENT WITH THE HELP OF STACK 
#include <iostream>
#include<stack>
using namespace std;

int main() {
  int n;
  int ans;
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.push(70);
  s.push(80);
  s.push(90);
  n = (s.size())/2;

  for(int i=0;i<=n;i++)
  {
    ans = s.top();
    s.pop();
  }

  cout<<"The middle element is : " << ans << endl;
  return 0;
}