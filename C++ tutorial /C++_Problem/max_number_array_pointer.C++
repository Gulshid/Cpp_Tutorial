#include<iostream>
using namespace std;

int main()
{
    // Find the Largest Value in Array Using Pointer

    int n; // Size of array 
    cout<<"Enter the value of term:";
    cin>>n;


    int arr[n];
    cout<<"Enter the Array Element:"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Array Element:"<<endl;
    // Display The Element of an array 
    for(int j =0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }

    cout<<endl;

    // USe Pointer variable 
    int *p = arr;  // array element ===> pointer variable
    int max = *p; // pointer variable ====> max 

    for(int z =0; z<n; z++)
    {
        if( * (p + z) > max)
        {
            max = *( p + z );
        }
    }


    cout<<"The Largest Element of an Array :"<<max<<endl;





}