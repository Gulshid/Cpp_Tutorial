#include<iostream>
using namespace std;

class A
{
    public:
    virtual void display()
    {
        cout<<"This is Class A-->"<<endl;
    }

};


class B : public A
{
    public :
    void display()
    {
        cout<<"This is Class B-->"<<endl;
    }

};


class C : public A
{
    public:
    void display()
    {
        cout<<"This is Class C-->"<<endl;
    }

};


int main()
{
    // SImple method 
    cout<<"Simple Method:"<<endl;
    A a;
    B b;
    C c;

    a.display();
    b.display();
    c.display();

    cout<<"Using Pointer for Polymorphism Concept:"<<endl;
    A *ptr;
    ptr = &a;
    ptr->display();

    ptr = &b;
    ptr->display();

    ptr = &c;
    ptr->display();



}