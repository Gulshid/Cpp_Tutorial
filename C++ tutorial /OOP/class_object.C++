

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
