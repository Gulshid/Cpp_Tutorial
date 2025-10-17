// Data Member and Member function
// data Member:  is the variable that hold data 
// Member function : that perform action on these data member
#include<iostream>
using namespace std;
// class Area
class Example
{
    private:
    int z; // Data member

    public:
    void show() // Member function
    {
        cout<<"Enter the value for z:";
        cin>>z;

        cout<<"The Value of z = "<<z<<endl;
    }


};


int main()
{
    // Object Area
    Example  e1;
    e1.show();
    
}