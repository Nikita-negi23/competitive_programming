#include <iostream>
using namespace std;

void printSubArrays(int arr[],int start,int end,int n)
{
  //base case
  if( end >= n )
  {
    return;
  }
  for(int i = start;i<end;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  printSubArrays(arr,start,end+1,n);
}

void calling(int arr[],int n,int start,int end)
{
  for(int i=0;i<n;i++)
  {
    start = i;
    printSubArrays(arr,start,end,n+1);
  }
}
int main() {
  int arr[5] = {1,2,3,4,6};
  int start = 0;
  int end = start;
  int n = sizeof(arr)/sizeof(arr[0]);
  //printSubArrays(arr,start,end,n+1);
  calling(arr,n,start,end);
  return 0;
}