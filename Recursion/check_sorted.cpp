#include <iostream>
using namespace std;

bool CheckSorted(int arr[],int i,int n)
{
  //Base Case ;
  if(i>=n)
  {
    return true;
  }

  if(arr[i] >= arr[i-1])
  {
    return CheckSorted(arr,i+1,n);
  }

  return false;

}
int main() {
  int arr[] = {2,3,1,5,6};
  int n = 5;
  int i = 1;

  bool answer = CheckSorted(arr,i,n);
  cout << answer << endl;
  
  return 0;
}