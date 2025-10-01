#include<iostream>
using namespace std;

int main()
{
    // loop ---> for , while , do-while
    //for loop 
    for(int x = 1; x<=10; x++)
    {
        cout<<x<<" ";
    }

    cout<<endl;

    //while loop
    int a = 1;
    while(a <=10)
    {
        cout<<a<<" ";
        a++;
    }

    cout<<endl;

    //do-while loop
    int b = 1;
    do{
        cout<<b<<" ";
        b=b+1;
    }

    while(b<=10);

    cout<<endl;

}