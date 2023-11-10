#include <iostream>
using namespace std;

void print_count(int n)
{
  //base case
  if(n==0)
  {
    return;
  }
  cout<<n<<" ";
  print_count(n-1);
}


int main() {
  int n;
  cout<<"Enter the value of n : ";
  cin>>n;
  print_count(n);
  return 0;
}