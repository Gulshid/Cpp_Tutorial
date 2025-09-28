#include<iostream>
using namespace std;

int main()
{
    // With thired 
    //Initialize variable
    int x =3;
    int y =5;

    cout<<"Before Swapping the value of x is :"<<x<<endl;
    cout<<"Before Swapping the value of y is :"<<y<<endl;

    int z ;
    z=x; //z =3
    x=y; //x = 5
    y=z; // y = 3

    cout<<"After Swapping the value of x is :"<<x<<endl;
    cout<<"After Swapping the value of y is :"<<y<<endl;

    cout<<"****************"<<endl;
    //Runtime input form User
    int a ;
    int b ;
    int c ;
    cout<<"Enter the value of a:";
    cin>>a;

    cout<<"Enter the value of b :";
    cin>>b;

    cout<<"Before Swapping the value of a is :"<<a<<endl;
    cout<<"Before Swapping the value of b is :"<<b<<endl;


    c=a;
    a=b;
    b=c;

    cout<<"After Swappping the value of a is :"<<a<<endl;
    cout<<"After Swapping the value of b is :"<<b<<endl;


}