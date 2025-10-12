#include <iostream>
using namespace std;

// Multiply and Divide functions

// Multply function
int Multiply(int x ,int y)
{
    int mul = x  * y;
    return mul;
}


// Divide function 
int Divide(int a, int b)
{
    if(b == 0)
    {
        cout<<"Error : Cannot Divdie by Zero"<<endl;
        return 0;
    }

    else{
        int div = a / b;
        return div;
    }
}






int main()
{
    //call the  multiply function 
    int num_1,num_2;
    cout<<"Enter the values for num 1 and num 2:";
    cin>>num_1>>num_2;

    cout<<"The Multiplication of two values :"<<Multiply(num_1, num_2)<<endl;


    //call the divide funciton 
    int var_1, var_2;
    cout<<"Enter the value for var 1 and var 2:";
    cin>>var_1>>var_2;


    cout<<"The division of two values :"<< Divide(var_1, var_2)<<endl;



    

}
