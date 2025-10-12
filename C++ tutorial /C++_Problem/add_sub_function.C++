                                            // 1. add function
                                            // 2. Sub function
#include<iostream>
using namespace std;

// Add function
int add(int x , int y)
{
    // method 1 
    return x + y;
}


// Sub function
int Sub(int a, int b)
{
    // method 2 
    int sub = a - b;
    return sub;

}




int main()
{

    cout<<"The addition of two value :"<<add(4,8)<<endl;
    int num_1, num_2;
    cout<<"Enter the values for num_1 and num_2:";
    cin>>num_1>>num_2;


    cout<<"The Subtraction of two values :"<<Sub(num_1, num_2)<<endl;

    
}