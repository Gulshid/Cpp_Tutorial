#include<iostream>
using namespace std;

// Inheritence
class A
{
    // Encapsulation
    private:
    int x,y;

    public:
    // Abstraction
    int input()
    {
        cout<<"Enter the value for x :";
        cin>>x;


        cout<<"Enter the value for y :";
        cin>>y;

    }

    int add()
    {
        int sum = x + y;

        cout<<"The addition of two value is :"<<sum<<endl;
        
    }




};

// Inheritence
class B : public A
{
    private:
    int x,y;

    public:
    // Abstraction
    int input_value()
    {
        cout<<"Enter the value for x :";
        cin>>x;


        cout<<"Enter the value for y :";
        cin>>y;

    }

    int sub()
    {
        int sub = x - y;

        cout<<"The Subtraction of two value is :"<<sub<<endl;
        
    }



};


int main()
{
    B b;
    b.input();
    b.add();

    b.input_value();
    b.sub();r
    




}