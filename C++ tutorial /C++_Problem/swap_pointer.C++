#include<iostream>
using namespace std;

int main()
{
    // Swap two Value Using Pointer 
    int a,b;
    cout<<"Enter the value for a and b:";
    cin>>a>>b;

    // Display the Before Swapping Value 
    cout<<"Before Swapping The Value fo a and b:"<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;


    int *p1, *p2, temp;
    // how to swap 
    p1 = &a;
    p2 = &b;


    // Swapping 
    temp = *p1; // temp = *p1 or a 
    *p1 = *p2; // *p1 = *p2 or b     ===> a = b
    *p2 = temp; // *p2 = temp =====> b = a


    cout<<"a :"<<a<<" b:"<<b<<endl;



}