#include<iostream>
using namespace std;

int main()
{
    // Sequence of number Reverse order by using pointer 
    int n;
    cout<<"Enter the Number of term :";
    cin>>n;


    int arr[n];
    cout<<"Enter the values for array Elements:"<<endl;

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }


    cout<<"Before Reverse order The Values of array Element:"<<endl;

    for(int j = 0; j<n; j++ )
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;


    int *start = arr;
    int *end = arr + n - 1;

    while(start < end)
    {
        int X = *start;
        *start = *end;
        *end = X;

        start++;
        end--;

    }

    cout<<"After Reverse The Array ELement:"<<endl;
    for(int z = 0;  z < n; z++)
    {
        cout<<arr[z]<<" ";
    }

    cout<<endl;
}