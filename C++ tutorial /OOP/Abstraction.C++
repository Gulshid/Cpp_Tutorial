#include<iostream>
using namespace std;

class A
{
    // Encapsulation 
    private:
    string name;

    public:

    // Without COnstructor
    void display_name() // Abstraction 
    {
        cout<<"Enter Your Name: ";
        getline(cin, name);


        cout<<"The Name is :"<<name<<endl;
    }


    // With COnstructor
    A()
    {
        cout<<"Enter Your Name: ";
        getline(cin, name);

        cout<<"The Name is :"<<name<<endl;

    }


};

int main()
{
    // Without COnstructor 
    A o;
    o.display_name();


    // With Constructor
    A p;



}