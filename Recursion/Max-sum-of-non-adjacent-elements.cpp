//MAXIMUM SUM OF NON-ADJACENT ELEMENTS 
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void solve(vector<int>& arr,int i,int sum,int& maxi)
{
  // Base Case
  if(i >= arr.size())
  {
    //maxi update;
    maxi = max(sum,maxi);
    return;
  }

  // INCLUDE
  solve(arr,i+2,sum+arr[i],maxi);

  // EXCLUDE
  solve(arr,i+1,sum,maxi);


}
int main() {
  vector<int> arr{1,2,4 };
  int i=0;
  int sum = 0;
  int maxi = INT_MIN;

  solve(arr,i,sum,maxi);
  cout << maxi << endl;

   
  return 0;
}