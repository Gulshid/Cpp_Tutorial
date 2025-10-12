#include<iostream>
using namespace std;

// function Overloading
int add(int x, int y)
{
    return x + y;
}


float add(float x ,int y)
{
    return x + y;
}

int main()
{

    cout<<add(3,5)<<endl;
    cout<<add(2,3)<<endl;

}