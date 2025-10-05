#include<iostream>
using namespace std;

int main()
{
    // int value;
    // cout<<"Enter the number of *:";
    // cin>>value;

    // for (int i =1; i<=value; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for (int i =1; i<=value; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }




    // for(int a = value; a>=1; a--)
    // {
    //     for(int b=1; b<=a; b++)
    //     {
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // for(int a = value; a>=1; a--)
    // {
    //     for(int b=1; b<=a; b++)
    //     {
    //         cout<<b<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++) {
    //     // spaces
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << " ";
    //     }
    //     // stars
    //     for (int j = 1; j <= 2*i - 1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    int n;
    cin >> n;

    // Upper pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2*i - 1; j++) cout << "*";
        cout << endl;
    }

    // Lower pyramid
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int j = 1; j <= 2*i - 1; j++) cout << "*";
        cout << endl;
    }
}