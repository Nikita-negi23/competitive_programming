#include <iostream>
using namespace std;

int present(string str,int i,char target)
{
  //Base Case 
  if(str[i] == target) 
  {
    return 1;
  }

  if(i>= str.length()) 
  {
    return -1;
  }

  return present(str,i+1,target);
}
int main() {
  string str = "Mukesh";
  int i = 0;
  char target = 'h';
  int ans = present(str,i,target);
  if(ans == 1)
  {
    cout<< "The character is present " << endl;
  }
  else if(ans == -1)
  {
    cout<< "The character is not present " << endl;
  }
  return 0;
}