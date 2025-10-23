#include<iostream>
using namespace std;

class Tempreture
{
    private:
    double celsius, fahrenheit;

    public:

    // function for Celsius
    double Celsius()
    {
        cout<<"Enter the value for Fahrenheit :";
        cin>>fahrenheit;

        celsius = (fahrenheit - 32) * 5/9;
        
        cout<<"The Celsius of :"<<fahrenheit<<" is :"<<celsius<<endl;

    }


    // function for Fahrenheit
    double Fahrenheit()
    {
        cout<<"Enter the value for Celsius:";
        cin>>celsius;


        fahrenheit = (celsius * 9/5) + 32;

        cout<<"The Fahrenheit of :"<<celsius<<" is :"<<fahrenheit<<endl;
    }

};



int main()
{
    Tempreture temp;
    cout<<" ******* Conversion of Fahrenheit to Celsius ***** "<<endl;
    temp.Celsius();
    cout<<" ******* Conversion of Celsius to Fahrenheit ***** "<<endl;
    temp.Fahrenheit();


}