#include<iostream>
using namespace std;

                        // Inheritence Shape ---> Circle and Rectangle Example
class Shape
{
    public:
    void shape()
    {
        cout<<"This is Shape :"<<endl;
    }
};


class Circle : public Shape
{
    private:
    // pi * r * r
    double radius, pi = 3.14;

    public:
    // function for User input at runtime
    void Input()
    {
        cout<<"Enter the value for Radius :";
        cin>>radius;
    }

    // function for Area of Circle and display
    void Area()
    {
        // formula of Circle
        float Area = pi * radius * radius;

        cout<<"The Area of Circle is :"<<Area<<endl;
    }

};


class Rectangle : public Shape
{
    private:
    // length * width
    double length , width;

    public:
    // function for user input at runtime 
    void Input()
    {
        cout<<"Enter the value for length :";
        cin>>length;

        cout<<"Enter the value for width :";
        cin>>width;

    }

    // function for Area of Rectangle -- > display
    void Area()
    {
        // formula for Area of Rectangle
        double Area = length * width;
        cout<<"The Area of Rectangle is :"<<Area<<endl;
    }
};

int main()
{
    Circle c1;
    c1.shape();
    cout<<"*** Area of Circle ***"<<endl;
    c1.Input();
    c1.Area();


    Rectangle r1;
    r1.shape();
    cout<<" *** Area of Rectangle ***"<<endl;
    r1.Input();
    r1.Area();
    
}