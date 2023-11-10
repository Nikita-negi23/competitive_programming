#include <iostream>
using namespace std;
void printDigits(int n)
{
  //base case;
  if(n==0)
  {
    return;
  }
  //recursion condition;
  int digit=n%10;
  cout<<digit;
  n=n/10;
  printDigits(n);
}
int main() {
  int n=647;
  printDigits(n);

  return 0;
}