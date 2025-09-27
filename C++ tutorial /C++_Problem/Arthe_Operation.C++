#include<iostream>
using namespace std;

int main()
{
    float var_1 = 20;
    float var_2 = 5;

    // without thired variable Arthematic Operation
    cout<<"*********Without thired Variable Arthematic Operation**********"<<endl;
    cout<<"The addiition of two number is :"<<var_1 + var_2<<endl;
    cout<<"The Subtraction of two number is :"<<var_1 - var_2<<endl;
    cout<<"The Multiplicatio of two number is :"<<var_1 * var_2<<endl;
    cout<<"The division of two number is :"<<var_1 / var_2<<endl;


    cout<<"*********With thired Variable Arthematic Operation**********"<<endl;
    float sum= var_1 + var_2;
    float sub= var_1 - var_2;
    float mul= var_1 * var_2;
    float div= var_1 / var_2;

    cout<<"The Addition of two number is :"<<sum<<endl;
    cout<<"The Subtraction of two number is :"<<sub<<endl;
    cout<<"The Multiplicatio of two number is :"<<mul<<endl;
    cout<<"The Division of two number is :"<<div<<endl;

}