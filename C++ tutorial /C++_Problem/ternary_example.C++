#include<iostream>
using namespace std;

int main()
{
    // Ternary ? :
    int num ;
    cout<<"Enter the value for num :";
    cin>>num;

    //check by using ternary operator 
    (num > 0) ? cout<<"The value is greater than zero " : cout<<"The value is less than Zero ";

    //Nested Ternary Operator 
    (num >= 0) ?
    ((num > 0)? cout<<"The Value is Greater than Zero " : cout<<"The value is equal to Zero")
    : cout<<"The value is less than Zero ";

}