#include<iostream>
using namespace std;

class A
{
    private: 
    // Encapsulation
    int a;


    public:
    // without constructor
    void display()
    {
        cout<<"Enter the value for a :";
        cin>>a;


        cout<<"The value of a :"<<a<<endl;
    }


    // with constructor
    A()
    {
        cout<<"Enter the value for a :";
        cin>>a;


        cout<<"The value of a :"<<a<<endl;
    }

};

int main()
{
     // without constructor
    A p;
    p.display();


    // with constructor
    A k;

}