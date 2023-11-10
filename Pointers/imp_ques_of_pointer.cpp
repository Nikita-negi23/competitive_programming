#include <iostream>
using namespace std;
int* solve()
{
  int a=6;
  int* ans=&a;
  return ans;
}
int main() {
 
  int* x=solve();
  cout<<x;
  
  return 0;
}