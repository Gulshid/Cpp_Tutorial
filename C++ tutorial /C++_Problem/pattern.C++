#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value :";
    cin>>a;

    for(int b = 1; b<=a;  b++) // this loop for how many row you want to print 
    {
        for(int c = 1; c<=b; c++) // this loop control and for print the * in a specific row
        {
            cout<<"*";
        }
        cout<<endl;

    }


}