#include <iostream>
using namespace std;

int  BinarySearch(int arr[],int s,int e,int& n,int key)
{
  // Base Case ;
  if(s > e)
  {
    return 0;
  }

  int mid = (s + e)/2;
   if(arr[mid] == key)
  {
     return mid;
  }

  if(arr[mid] > key)
  {
    return BinarySearch(arr,s,mid-1,n,key);
  }

  if(arr[mid] < key)
  {
    return BinarySearch(arr,mid+1,e,n,key);

  }

 
}

int main() {
  int arr[]= {10,20,30,40,50,60};
  int n=6;
  
  int key = 40;
  int s = 0;
  int e = n-1;
  int ans = BinarySearch(arr,s,e,n,key);
  
  cout << ans;
  return 0;
}