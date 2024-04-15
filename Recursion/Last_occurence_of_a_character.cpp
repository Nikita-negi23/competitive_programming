//LAST OCCURENCE OF A CAHRACTER
#include <iostream>
#include <string>
using namespace std;

int last_occ(string str,int i,int key,int& count)
{
  
  // Base Case
  if(i >= str.length())
  {
    return count;
  }
  
  if(str[i] == key)
  {
    count = i;
  }

  // Recursion 
  return last_occ(str,i+1,key,count);
}
int main() {
  string str = "abcddcdg";
  char key = 'c';
  int i = 0;
  int count = 0;

  int ans = last_occ(str,i,key,count);
  cout << ans << endl;
  
  return 0;
}