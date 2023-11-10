#include <iostream>
using namespace std;

class Animal 
{
  public:
  //state or properties;
  int age;
  string name;

  //behavior;

  void eat()
  {
    cout<<"Eating"<<endl;
  }
  void sleep()
  {
    cout<<"Sleeping"<<endl;
  }
};

int main() {
  
  //OBJECT CREATION 
  //class ka object banana hai;

  //object creation do tarike se ho sakti hai;

  //1) STATIC MEMORY
  Animal ramesh;

  ramesh.age=12;
  ramesh.name="lion";
  //Agar kisi object ki property ko access karna hai to hame (.) operator use karna hoga
  cout<<"age of ramesh is : "<<ramesh.age<<endl;
  cout<<"name of ramesh is : "<<ramesh.name<<endl;

  ramesh.eat();
  ramesh.sleep();

  //2) DYNAMIC MEMORY
  return 0;
}