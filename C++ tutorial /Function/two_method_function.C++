#include<iostream>
using namespace std;

//  Method 1 : before Main()

void display() // Declaration of function
{
    // Definition of funciton
    cout<<"Method No 1"<<endl;
}


//Method 2 : Prototyping method 
void hello();


int main()
{
    // call of function
    display();
    hello();

}


void hello()
{
    cout<<"Method No 2"<<endl;
}