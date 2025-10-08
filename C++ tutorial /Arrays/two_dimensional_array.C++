/*
    1. 2D Array Initialization
    2. 2D Array Initialize value Display one by one method
    3. 2D Array Initialize value Display using loop method
    4. 2D Array input from User at Runtime 

*/


#include<iostream>
using namespace std;

int main()
{
    int arr[3][2] =  {{1,2}, {4,5}, {6,7}};
    //Display the array values One by One Method
    cout<<arr[0][0]<<" "<<arr[0][1]<<endl;
    cout<<arr[1][0]<<" "<<arr[1][1]<<endl;
    cout<<arr[2][0]<<" "<<arr[2][1]<<endl;

cout<<"********* 3 X 2 ***********"<<endl;
    // Display the array values by loop Method

    for(int i = 0; i < 3; i++ ) // for rows
    {
        for(int j = 0; j < 2; j++) // for column
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<"********************"<<endl;

// How to take an Input values from User at Runtime  in 2D Array
int array[3][2]; // 3X2 Matr. 
// [3]= 0,1,2 = 3 rows
// [2]= 0,1 = 2 col

cout<<"Enter the Values for 2D Array:"<<endl;

for(int i = 0; i < 3; i++) // 0,1,2 = [3] rows
{
    for(int j = 0; j < 2; j++) // 0,1 =[2] col
    {
        cin>>array[i][j];
    }
}
cout<<"******** 3 X 2 **********"<<endl;

//Display the 2d Array 
for(int i = 0; i < 3 ; i++)
{
    for(int j =0; j < 2;  j++)
    {
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}


}


