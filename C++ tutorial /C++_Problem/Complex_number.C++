#include<iostream>
using namespace std;
        // Write a Program for find the Complex Number {Real and Imaginary Number} of Mathematics

class Complex
{
    private:
    int real, imag;

    public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        // set the real and imaginary var or parameters
        real = r;
        imag = i;
    }


    // function for Input from USer at run time 
    void Input()
    {
        cout<<"Enter the value for Real Part :";
        cin>>real;

        cout<<"Enter the value for Imaginary Part :";
        cin>>imag;
    }


    // function for display the Complex Number
    void display()
    {
        cout<<"The Complex Number :"<<endl;
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

};

int main()
{
    Complex  complex_num;
    complex_num.Input();
    complex_num.display();

}
