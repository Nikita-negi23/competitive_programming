#include <iostream>
using namespace std;

void num_print(int n)
{
  //Base Case ;
  if(n <= 0)
{
  return ;
}
int rem = n%10;
cout << rem << endl;
n = n/10;

num_print(n);

}
int main() {
  int n = 345;
  num_print(n);
  return 0;
}