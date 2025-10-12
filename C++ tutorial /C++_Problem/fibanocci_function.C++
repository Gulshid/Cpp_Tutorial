// Write a function that can find the fibanocci series 
#include<iostream>
using namespace std;


// fibanocci function
int fibanocci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    else if(n == 1)
    {
        return 1;
    }

    else{
        return fibanocci(n-1) + fibanocci(n-2);
    }
}



int main()
{
    int num;
    cout<<"Enter the Fibonocci Series Nnumber :";
    cin>>num;

    for(int i = 0; i<num; i++)
    {
        cout<<fibanocci(i)<<" ";
    }
    cout<<endl;


}