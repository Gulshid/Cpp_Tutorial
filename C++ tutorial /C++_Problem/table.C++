#include<iostream>
using namespace std;

int main()
{
    // Table using for loop
    cout<<"******* Table using for loop *********"<<endl;
    int table ;
    cout<<"Enter the table that you want:";
    cin>>table;


    for(int i = 1; i<=10; i++)
    {
        cout<<table<<"X"<<i<<"="<<table*i<<endl;
    }

    cout<<"******* Table using while loop *********"<<endl;
    int tab;
    cout<<"Enter the Table that you want :";
    cin>>tab;

    int a = 1;
    while(a<=10)
    {
        cout<<tab<<"X"<<a<<"="<<tab*a<<endl;
        a++;
    }


}