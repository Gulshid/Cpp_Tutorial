// Array values print in Reverse Order
#include<iostream>
using namespace std;

int main()
{
    //Initialize array
    int x[10]= {1,2,3,4,5,6,7,8,9,10};
    cout<<"Before :"<<endl;
    for (int a = 0; a<=9; a++)
    {
        cout<<x[a]<<" ";
    }

    cout<<endl;
    cout<<"After:"<<endl;
    // by using for loop we display the sequence of value in reverse order
    for(int i = 9; i >= 0; i--)
    {
        cout<<x[i]<<" ";
    }

    cout<<endl;
}