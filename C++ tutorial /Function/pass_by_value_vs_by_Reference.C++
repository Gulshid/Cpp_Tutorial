/*
    
        1. Pass By value VS Reference
        2. default paramter 
        3. paramater and Argument difference
*/


#include<iostream>
using namespace std;

    //    1. Pass By value VS Reference

// pass by value 
int pass_value(int x)
{
    x = x + 6;
    return x;
}


// pass by reference
int pass_reference(int &y)
{
    y = y + 6;
    return y;
}

int main()
{
    int num = 3;
    cout<<"The Num value Before in pass by value  is :"<<num<<endl;
    pass_value(num);
    cout<<"The Num value After in pass by value is :"<<num<<endl;

    cout<<"**************"<<endl;

    cout<<"The Num value Before in Pass by Reference :"<<num<<endl;
    pass_reference(num);
    cout<<"The Num Value After in pass by Reference :"<<num<<endl;


}