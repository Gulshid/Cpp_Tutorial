#include<iostream>
using namespace std;

int main()
{
    // display the Numbers in Reverse Order. and Then Check for plaindrom
    int num , rev = 0, digit , original;
    cout<<"Enter the value for num :";
    cin>>num;

    original = num;
    cout<<"Numbers is :"<<num<<endl;

    while(num > 0)
    {
        digit = num % 10;
        rev= rev * 10 + digit;
        num = num / 10;
    }

    cout<<"Numbers is Reverse ORder:"<<rev<<endl;
    // check whether before number is equal to after Reverse nnumber 
    if (original == rev )
    {
        cout<<"The Numbers is Plaindrome"<<endl;
    }
    else if (original != rev)
    {
        cout<<"The Numbers is Not a Plaindrome"<<endl;
    }
}