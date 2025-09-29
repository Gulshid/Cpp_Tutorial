#include<iostream>
using namespace std;

int main()
{
    // Celsius to Fahrenheit Conversion
    float Celsius, Fahrenheit;
    cout<<"Enter the Celsius:";
    cin>>Celsius;

    Fahrenheit = (Celsius * 9/5) + 32;

    cout<<"The Fahrenheit of "<<Celsius<<" is :"<<Fahrenheit<<endl;

    cout<<"***************"<<endl;
    // fahrenheit to Celsius COnversion
    float cel, fah;
    cout<<"Enter The fahrenheit:";
    cin>>fah;

    cel = (fah - 32) * 5/9;

    cout<<"The Celsius of "<<fah<< " is :"<<cel<<endl;
    


}