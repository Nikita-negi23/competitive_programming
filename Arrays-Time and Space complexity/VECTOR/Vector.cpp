#include <iostream>
#include<vector>
using namespace std;

int main() {
  //create vector 
  vector <int> arr;
  cout<<arr.size()<<endl;
  cout<<arr.capacity()<<endl;
  
//INSERTING AN ELEMENT IN AN //VECTOR
  
  arr.push_back(5);
  arr.push_back(6);

  //DELETING AN ELEMENT IN AN //VECTOR
  arr.pop_back();

//EXPLICITLY DEFINING THE SIZE AND 
  // CAPACITY;
  vector <int> brr(10);

//INITIALIZING VECTOR VALUES ;
  vector <int> crr{10,20,30,40};

// EMPTY() FUNCTION IN VECTOR;
  int a=crr.empty();

  return 0;
}