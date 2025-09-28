#include<iostream>
using namespace std;

int main()
{
    // without thired Variable --> how to swap 
    //Initilize variable
    int x =4;
    int y = 8;

    cout<<"Before Swappping the value of x is :"<<x<<endl;
    cout<<"Before Swapping the value of y is :"<<y<<endl;

    x = x+y; // x = 4 + 8 ==> x= 12
    y = x- y; // y= 12 - 8 ===> y= 4
    x = x-y;  //x = 12 - 4 ====> x = 8

    cout<<"After Swapping the value of x is :"<<x<<endl;
    cout<<"After Swapping the value of y is :"<<y<<endl;

    cout<<"*******************"<<endl;
//Runtime from user
    int a ;
    int b ;

    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b:";
    cin>>b;

    cout<<"Before Swapping the value of a is :"<<a<<endl;
    cout<<"Before Swapping the value of b is :"<<b<<endl;

    a= a+b;
    b= a-b;
    a= a-b;

    cout<<"After Swapping the value of a is :"<<a<<endl;
    cout<<"After Swappping the value of b is :"<<b<<endl;


} 