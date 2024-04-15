// CUT INTO SEGMENTS 
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int solve(int n,int x,int y,int z)
{
  // Base Case
  if(n == 0)
  {
    return 0;
  }

  if (n < 0)
  {
    return INT_MIN;
  }

  int ans1 = solve(n-x,x,y,z);
  int ans2 = solve(n-y,x,y,z);
  int ans3 = solve(n-z,x,y,z);

  int ans = max(ans1,max(ans2,ans3));
  return ans;
}

int main() {
  int n = 7;
  int x = 5;
  int y = 2;
  int z = 2;
  
  int ans = solve(n,x,y,z);

  if(ans < 0)
  {
    ans = 0;    
  }
   
  cout << "Answer is : " << ans << endl;
  
  return 0;
}