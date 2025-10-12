// Write a function  that can find the factorial of Any Number
// Recursive function
#include<iostream>
using namespace std;

// fact function
int fact(int num)
{
    if(num == 0 || num == 1)
    {
        return 1; // 0 and 1 ==> factorial = 1
    }

    else{
        // logic for factorial
        // Recursive function
        return num *  fact(num - 1);
    }
}




int main()
{

    int fac;
    cout<<"Enter the Number for factorial :";
    cin>>fac;

    int factorial = fact(fac);
    cout<<"The fcatorial of "<<fac<<" is "<<factorial<<endl;

}