#include<iostream>
using namespace std;

int main()
{
    // else-if Conditional Statement
    int value;
    cout<<"Enter the value:";
    cin>>value;
    
    
    if ( value > 0)
    {
        cout<<"The value is greater than Zero"<<endl;
    }

    else if (value < 0)
    {
        cout<<"The value is less than Zero"<<endl;
    }

    else
    {
        cout<<"The value is equal to Zero"<<endl;
    }

}