#include <iostream>
using namespace std;
//ye pass by value se hi ho gya................
bool checkkey(string str,int n,char key,int i)
{
  //base case
  if(i>=n)
  {
    return false;
  }
  if(str[i]== key)
  {
    return true;
  }
  //recursion
  bool ans=checkkey(str,n,key,i+1);
  return ans;

}
int main() {
  string str="lovebabbar";
  int n=str.length();
  char key = 'k';
  int i=0;
  bool ans=checkkey(str,n,key,i);
  cout<<"answer is : "<<ans<<endl;
  return 0;
}