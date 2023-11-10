//STACK 
#include <iostream>
#include<stack>
using namespace std;

int main() {
  //Creation;
  stack<int> st;

  //Insertion;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);

  //Remove;
  st.pop();

  //Check element on top;
  cout<<"Element on top is : "<<st.top();
  cout<<"Element on top is : "<<st.size();



  return 0;
}