#include<iostream>
using namespace std;

int main()
{
    //1---20 {Even and Odd}
    // for loop
    

    //Even Number 
cout<<"********** For Even Number ***********"<<endl;
    for(int a =1; a<=10; a++)
    {
        if(a % 2 == 0) // for even logic
        {
            cout<<a<<" ";
        }
    
        cout<<endl;

    }
cout<<"************ For Odd Number ***********"<<endl;
    //Odd Number
    for (int b = 1; b<=10; b=b+1)
    {
        if(b % 2 == 1) // for odd Number
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}