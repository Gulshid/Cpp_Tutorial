/*      OOP {Object Oriented Programming}
        Class and Object 

        Class: A class is like a plan or design for making something.
        Object: An object is the thing made from that plan.


        💡 Example:

        Class → Mobile Phone design

        Object → Your real mobile phone
*/   

#include<iostream>
using namespace std;

// Class Syntax 
class Greeting
{
    public: // Access Specifier
    // function that can show the message 
    void show()
    {
        cout<<"Aaslam mu Alikum"<<endl;
    }



};


int main()
{
    // Object Syntax
    Greeting greet;
    greet.show();
}
