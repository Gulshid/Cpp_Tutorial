#include<iostream>
using namespace std;

int main()
{
    //for loop 
    //forward order
    cout<<"******** Forward Order in for loop*********"<<endl;
    for(int i = 1; i <= 20; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"******** Reverse Order in for loop *********"<<endl;
    // Reverse Order
    for(int i = 20; i>=1; i--)
    {
        cout<<i<<" ";

    }
    cout<<endl;

    cout<<"******** Forward Order in while loop*********"<<endl;
    int a = 1;
    while(a<=20)
    {
        cout<<a<<" ";
        a++;

    }

    cout<<endl;
    cout<<"******** Reverse Order in while loop*********"<<endl;

    int b = 20;
    while(b>=1)
    {
        cout<<b<<" ";
        b--;
    }
    cout<<endl;
}