#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Datatype of declaration
    //int datatype j

    int a = 10; 
    short int b=20;

    // float datatype
    float x=2.4;
    double y=3.4;
    long double z= 1.2;


    //char datatype 
    char alphabet= 'A';

    //bool datatype
    bool istrue=true;

    //string datatype
    string value = "Hello World! This is String of C++ programming.";

    // integer value display
    cout<<"The Short int value is  :"<<b<<endl;
    cout<<"The int value is :"<<a<<endl;

    //float value display 
    cout<<"The float value is :"<<x<<endl;
    cout<<"The double value is :"<<y<<endl;
    cout<<"The long double value is :"<<z<<endl;

    //char value display 
    cout<<"The char value is :"<<alphabet<<endl;

    //bool value display 
    cout<<"The bool value is :"<<istrue<<endl;

    //string value display 
    cout<<"The string value is :"<<value<<endl;

    cout<<"**************Size of datatype***********"<<endl;

    // Size of Datatype 
    cout<<"The short int size is :"<<sizeof(short)<<" byte"<<endl;
    cout<<"The int size is :"<<sizeof(int)<<" byte"<<endl;
    cout<<"The float size is :"<<sizeof(float)<<" byte "<<endl;
    cout<<"The double size is :"<<sizeof(double)<<" byte "<<endl;
    cout<<"The long double size is :"<<sizeof(long double)<<" byte "<<endl;
    cout<<"The char size is :"<<sizeof(char)<<" byte "<<endl;
    cout<< "The bool size is :"<<sizeof(bool)<<" byte "<<endl;
    cout<<"The string size is :"<<sizeof(string)<< "byte "<<endl;










}