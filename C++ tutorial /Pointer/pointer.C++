/*
    1. Pointer Initialization
    2. Reference Operator (&)
    3. DeReference Operator (*)
*/

#include<iostream>
using namespace std;

int main()
{
    int x = 3;
    int *y = &x;  // x find Address and *y store x value = 3

    cout<<"The Value of X :"<<x<<endl; // display the constant value 
    cout<<"The Address of X :"<<&x<<endl; // display the Address of value

    cout<<"De Reference Operator of Y :"<<*y<<endl; // The value of x = 3 ===> y = 3;
    cout<<"Y :"<<y<<endl;   // display the Address of y

}
