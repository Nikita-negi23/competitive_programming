//BASICS OF STRING AND CHARACTER;
#include <iostream>
#include<string.h>
using namespace std;

int main() {
  char name[100];
  cin.getline(name,50); //getline function -- used to count spaces in C++
  cout<<name;          //gets function -- used to count spaces in C Lang.
  return 0;
}