/*
            *
           ***
          *****
         *******
        *********

    */

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the value for number:";
    cin>>number;


    for(int i = 1; i<=number;  i++)
    {
        // for spaces
        for(int j = 1; j<=number-i;  j++)
        {
            cout<<" ";
        }

        // for Asterik (*)
        for(int z = 1; z<= 2 * i - 1; z++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}



