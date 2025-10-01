#include<iostream>
using namespace std;

int main()
{
    // Nested if-else Conditional Statement 
    float x ;
    cout<<"Enter the value for x :";
    cin>>x;


    if ( x >= 0)
    {
        //nested  if - else 
        if ( x > 0)
        {
            cout<<"The Value of x is greater Than Zero"<<endl;
        }
        else if( x == 0)
        {
            cout<<"The Value of x is Equal to Zero"<<endl;
        }
    }

    else if ( x < 0)
    {
        cout<<"The Value of x is less Than Zero"<<endl;
    }
}