#include<iostream>
using namespace std;

int main()
{
    // Syntax Error
    int x = 4  // Wrong 
    int y = 4; // Correct 

    // Semantic Error 
    int a = 2.9 ; // Wrong 

    float b = 2.9 ;  // Correct 


    // Runtime Error
    int r = 10; 
    int p = 0;

    cout<<"Result is :"<<r / p;

}