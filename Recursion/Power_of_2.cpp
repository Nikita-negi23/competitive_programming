//Power of 2
#include <iostream>
using namespace std;

int power(int n)
{
  //Base case;
  if(n == 1)
  {
    return 2;
  }  

  int ans = 2 * power(n-1);
  return ans; 
}
int main() {
  int n=5;
  int ans;
  ans = power(n);
  cout << "The answer is : " << ans;
  return 0;
}