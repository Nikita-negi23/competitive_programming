//Array printing by Recursion ;
#include <iostream>
using namespace std;

void print(int arr[],int n,int i)
{
  //Base case
  if(i>=n)
  {
    return;
  }
  
  cout << arr[i] << " ";

  //Recursion
  print(arr, n ,i+1);
}

int main() {

  int arr[5]={10,20,30,40,50};
  int n=5;
  int i=0;
  print(arr,n,i);
  
  return 0;
}