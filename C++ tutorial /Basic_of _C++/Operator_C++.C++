#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    // Arthematic Operator 
    float a =22;
    float b =5;

    // Operation for addition
    cout<<"Addition of two value is :"<<a+b<<endl;
    //Operation for Subtraction
    cout<<"Subtraction of two value is :"<<a-b<<endl;
    //Operation for Multiplication
    cout<<"Mul of two value is :"<<a*b<<endl;
    //Operation for Division
    cout<<"Division of two value is :"<<a/b<<endl;
    //Operation for Modulas
    cout<<"Reminder of two value is :"<<fmod(a,b)<<endl;


    //Relational Operator
    int x= 10;
    int y= 30;

    // greater and less
    x > y; // check if x  value greater than y display "The value of x is greater than y "
    x < y; // check if x less than y than display "The value of x is less than y "

    //equal to  and not equal to
    x == y; //check if the value of x is equal to y than display "The value of x is equal to y"
    x != y; //check if the value of x is not equal to y than display "The value of x is not equal to y"

    //greater or equal and less or equal 

    x >= y;// check if the value of x is greater or equal display "The value of x is greater or equal to y"
    x <= y; // check if the value of x is less or equal than display "The value of x is less than or equal to y"
    


}