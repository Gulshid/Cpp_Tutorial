#include<iostream>
using namespace std;

int main()
{
    // Largest Among 3 Numbers
    int value_1, value_2, value_3;
    cout<<"Enter the value for number 1:";
    cin>>value_1;

    cout<<"Enter the value for Number 2:";
    cin>>value_2;

    cout<<"Enter the value for Number 3:";
    cin>>value_3;

    // logic for value_1
    if (value_1 > value_2 && value_1 > value_3)
    {
        cout<<"The Largest Among Three Variable is :"<<value_1<<endl;
    }

    // logic for value_2
    else if(value_2 > value_1 && value_2 > value_3)
    {
        cout<<"The Largest Among Three Variable is :"<<value_2<<endl;
    }
    
    // logic for value_3
    else if(value_3 > value_1 && value_3 > value_1)
    {
        cout<<"The Largest Among Three Variable is :"<<value_3<<endl;
    }

}