#include<iostream>
#include<vector>
using namespace std;
int main()
{
  //pair sum;
  vector<int>arr{10,20,30,40,60,70};
  int sum=60;
  //print all pairs;
  //outer loop will traverse for each element;
  for(int i=0;i<arr.size();i++)
    {
      int element =arr[i];
      //for every element,will traverse on aae wale elements;
      for(int j=i+1;j<arr.size();j++)
        {
          if(element + arr[j] == sum)
          {
            cout<<"pair found"<<element<<","<<arr[j]<<endl;
          }
          
        }
    }
  return 0;
}