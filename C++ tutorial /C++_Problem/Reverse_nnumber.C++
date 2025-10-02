#include<iostream>
using namespace std;

int main()
{
    // display the number in  Reverse order
    int num, digit, rev = 0;
    cout<<"Enter the value for Num:";
    cin>>num;

    cout<<"The Num value is :"<<num<<endl;
    while(num > 0)
    {
        digit = num % 10; // 1234 / 10 = 123.4
        rev = rev * 10 + digit; // 0 * 10 + 4 = 0 + 4 = 4
        num = num / 10; // 1234 / 10 = 123.4 = 123
    }

    cout<<"The Number is Reverse Order:"<<rev<<endl;
}