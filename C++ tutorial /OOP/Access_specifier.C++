                                                // Access Specifier {Public, private, protected}

#include<iostream>
using namespace std;

// Classes Area

// Access Specifier Public
class A 
{
    public:
    int x;
    void show_A()
    {
        cout<<"Enter the value for x:";
        cin>>x;

        cout<<"The Value of x :"<<x<<endl;
    }

};


// Access Specfier Private
class B
{
    private:
    int y;
    public:
    void show_B()
    {
        cout<<"Enter the value for y :";
        cin>>y;


        cout<<"The value of y :"<<y<<endl;
    }


};


// Access Specifier Protected
class C 
{
    protected:
    int z;
};


class D : public C
{
    public:
    void show_C()
    {
        cout<<"Enter the value for z:";
        cin>>z;

        cout<<"The value of z :"<<z<<endl;
    }

};





int main()
{

    // Objects Area
    A value;
    value.show_A();


    B value_2;
    value_2.show_B();

    D value_3;
    value_3.show_C();





}