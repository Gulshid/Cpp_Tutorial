/*
        1. default paramter 
        2. paramater and Argument difference
*/

#include<iostream>
using namespace std;

// 1 . default parameter in function
void name(string na = "Guest") // this is default value
{
    cout<<"My Name is "<<na<<endl;
}

// 2. Paramter and Arguments
int add(int a, int b). // int a, int b ===> parameters
{
    return a + b;
}

int main()
{
    //display the values
    int sum = add(3,4); // 3,4 =====> Arguments
    cout<<"Sum of two value is :"<<sum<<endl;

    name("Gulshid Zada");
    // display the default value
    name();
    name("Muhammad");

}