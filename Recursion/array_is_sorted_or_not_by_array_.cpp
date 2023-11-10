#include <iostream>
using namespace std;
//Array is sorted or not;
int checkSorted(int *arr,int i)
{
  //base case;
  if(arr[i]==6)
  {
    return 1;
  }
  if(arr[i+1]<arr[i])
    {
      return 0;
    }
  i=i+1;
  return checkSorted(arr,i);
}

int main() {
  int arr[6]={2,4,6,8,10,5};
  int i=0;
  int ans=checkSorted(arr,i);
  if(ans==1)
  {
    cout<<"array is sorted";
  }
  else
  {
    cout<<"array is not sorted";
  }
  return 0;
}
