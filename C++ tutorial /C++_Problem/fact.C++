#include<iostream>
using namespace std;

int main()
{
    // find the factorial of any number 
    int num, fact = 1;
    cout<<"Enter the value that you find the factorial of that number:";
    cin>>num;


    if(num == 0 || num == 1) // 0! or 1! ===> 1
    {
        cout<<"The Factorial of "<<num<<" is 1"<<endl;
    }
    else{
        for(int cal = 1; cal <=num; cal++)  // 3! => 3 * 2 * 1 or 1 * 2 * 3 = 6
        {
            fact = fact * cal;
        }

        cout<<"The Factorial of "<<num<<" is "<<fact<<endl;


    }
}

