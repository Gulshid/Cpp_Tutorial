#include<iostream>
using namespace std;

int main()
{
    // Example rows and cols ( * )
    int rows, cols;
    cout<<"Enter the value for rows:";
    cin>>rows;

    cout<<"Enter the value for cols:";
    cin>>cols;


    // nested for loop
    //Outer loop for rows
    for (int i =1; i<=rows; i+=1)
    {
        //Inner loop for cols
        for(int j= 1; j<=cols; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}