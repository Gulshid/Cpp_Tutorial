// find the max and  min values in array 
// User Runtime input
#include<iostream>
using namespace std;

int main()
{
    // Array Declare 
    int user_array[5];
    cout<<"Enter the Values for Array :"<<endl;

    // cin for loop User Input 
    for(int i = 0; i < 5; i++)
    {
        cin>>user_array[i];
    }


    int max = user_array[0];
    int min = user_array[0];

    // display the array value
    for(int j = 0; j < 5; j++)
    {
        if(user_array[j] > max)
            max = user_array[j];

        if(user_array[j] < min)
            min = user_array[j];
    }


    cout<<"The Max Value of an Array :"<<max<<endl;
    cout<<"The Min Value of an Array :"<<min<<endl;

}