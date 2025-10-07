#include<iostream>
using namespace std;

int main()
{  
    /*
    1 -  1D Array 
    2 -  how to value store in array and also display using randomly by variable and indexing 
    3 -  how to display the array value using  loop
  */


  // indexing ---> Size[4]= 0,1,2,3
  int x [3]={1,2,3}; //start from 0,1,2,3 ....


  int x[4]={1,2,3,4}; //1-  One Dimensional array 
  //2 -  method one by one indexing method
  cout<<x[0]<<" ";
  cout<<x[1]<<" ";
  cout<<x[2]<<" ";
  cout<<x[3]<<endl;

  //3-  loop method 
  for (int i = 0; i < 4; i++)// 0,1,2,3
  {
    cout<<x[i]<<" ";
  }

  cout<<endl;

  // Runtime input from user 
  int var_1[5];
  cout<<"Enter the values for var_1:"<<endl;

  // Runtime User input
  for(int i = 0; i < 5; i++)
  {
    cin>>var_1[i];
  }

  //Display the Output

  for(int j = 0; j < 5; j++)
  {
    cout<<var_1[j]<<" ";
  }

  cout<<"\n";

















}