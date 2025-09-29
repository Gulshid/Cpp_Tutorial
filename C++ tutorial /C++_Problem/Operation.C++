#include<iostream>
using namespace std;

int main()
{
    int x , y;
    cout<<"****** Simple Calculator ******"<<endl;
    cout<<"Enter the first value:";
    cin>>x;

    cout<<"Enter the second value :";
    cin>>y;

    //Arthematic Operation formulas
    int sum = x + y;
    int sub = x - y;
    int mul = x * y;
    int div = x / y;

    //display the output
    cout<<"Sum is :"<<sum<<endl;
    cout<<"sub is :"<<sub<<endl;
    cout<<"mul is :"<<mul<<endl;
    cout<<"div is :"<<div<<endl;

}