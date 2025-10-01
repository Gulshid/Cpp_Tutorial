#include<iostream>
using namespace std;

int main()
{

    // switch and break Conditional Statement
    int x;
    cout<<"Enter the value for x :";
    cin>>x;


    switch(x)
    {
        case 1 : cout<<"You Entered "<<x<<endl;
        break;

        case 2 : cout<<"you Entered "<<x<<endl;
        break;

        case 3 : cout<<"You Entered "<<x<<endl;
        break;

        default: cout<<"You neither Entered 1 , 2, 3 , you entered "<<x<<endl;
    }
}