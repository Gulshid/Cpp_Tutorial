/*
    Numbers : 123
    1*1*1
    2*2*2
    3*3*3
    1 + 8 + 27 = 36

    123 != 36 ===> Not an Armstrong Number


    Numnbers : 153
    1*1*1
    5*5*5
    3*3*3
    1 + 125 + 27 = 153

    153 == 153 ====> This is Armstrong Number

*/

#include<iostream>
using namespace std;

int main()
{
    int num, sum = 0, original , digit;

    cout<<"Enter the value for num :";
    cin>>num;

    original = num;

    while(original > 0)
    {
        digit = original % 10; //quotient = Answer
        sum = sum + (digit * digit * digit);
        original = original / 10;
    }

    // Check whether the number is Armstrong or not 
    if ( sum == num)
    {
        cout<<"The Number "<<num<<" is Armstrong Number"<<endl;
    }

    else if (sum != num)
    {
        cout<<"The Number "<<num<<" is Not an Armstrong Number"<<endl;
    }
}