#include <iostream>
using namespace std;

bool BinarySearch(int arr[],int s,int e,int& n,int key)
{
  // Base Case ;
  if(s > e)
  {
    return false;
  }

  int mid = (s + e)/2;
   if(arr[mid] == key)
  {
     return true;
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
  //int i=0;
  int key = 60;
  int s = 0;
  int e = n-1;
  bool ans = BinarySearch(arr,s,e,n,key);
  
  if(ans)
  {
    cout << " Element is present ";
  }

  else 
  {
    cout << " Element is not present ";
  }
  return 0;
}