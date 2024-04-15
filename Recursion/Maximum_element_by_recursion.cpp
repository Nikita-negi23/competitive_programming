#include <iostream>
#include<climits>
using namespace std;

 
void maximum(int arr[],int i,int n,int maxi)
{
  // int solution;
  
  //Base Case;
  if(i>=n)
  {
    cout<<"max num - "<< maxi ;
    return;
  }

  
  int solution = max(maxi,arr[i]);
  
  maximum(arr, ++i, n, solution);
  
}

int main() {
  int arr[] = {19,10,90,25,3};
  int n = 5;
  int i = 0;
  int maxi = INT_MIN;

  maximum(arr,i,n,maxi);
  
  return 0;
}