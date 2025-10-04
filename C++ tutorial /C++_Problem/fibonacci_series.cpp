/*
    enter : 7
    fibonacci Series:  0 1 1 2 3 5 8

    first = 0, second = 1
    first = second 
    second = next
******************************************************

    1st term 
    first = 0
******************************************************

    2nd term
    second = 1
******************************************************

    3rd term Iteration
                        next = first + second => 0 + 1 = 1            
    next = 1
    first = 1
    second = 1

******************************************************

    4th trm Iteration 
                        next = first + second = 1 + 1 = 2
    next = 2
    first = 1
    second = 2

******************************************************

    5th term Iteration
                        next = first + second = 1 + 2 = 3
    next = 3
    first = 2
    second = 3

******************************************************

    6th term Iteration
                        next = first + second = 2 + 3 = 5
    next = 5
    first = 3
    second = 5

 ******************************************************

    7th term Iteration 
                        next = first + second = 3 + 5 = 8
    next = 8
    first = 5
    seceond = 8

******************************************************
etc ---> 8,9, 10 ..... n term 
*/

// Find the Series of Fibonacci Series
#include<iostream>
using namespace std;

int main()
{
    // find the Fibonacci Series of any term of number
    int num, first_term = 0, second_term = 1, next;
    cout<<"Enter the value for num :";
    cin>>num;


    if(num >= 1){
        cout<<first_term<<" ";
    }

    if(num >= 2)
    {
        cout<<second_term<<" ";
    }

    for(int i = 3 ; i <= num; i++ )
    {
        next = first_term + second_term;
        cout<<next<<" ";
        first_term = second_term;
        second_term = next;
    }

    cout<<endl;
    
}


