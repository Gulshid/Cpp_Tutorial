#include<iostream>
using namespace std;

int main()
{
    // Continue Statement by the help of for loop
    for (int x =0 ; x<=10; x++)
    {
        if(x == 6)
        {
            continue;
        }
        cout<<x<<" ";
        cout<<endl;
    }

}