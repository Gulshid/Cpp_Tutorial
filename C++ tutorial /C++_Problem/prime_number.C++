#include<iostream>
using namespace std;

int main()
{
    // Find the Prime Number of any Number
    // Divide 1 and Itself ===> 2,3,5,7,11,13 Prime Numbers

    int num ;
    cout<<"Enter the value for Number:";
    cin>>num;


    bool Is_prime =  true;

    if(num <= 1)
    {
        Is_prime = false;
        cout<<"The Number you entered is Not a Prime Number because 0,1 and Negative Number has not a Prime Number:"<<endl;

    }

    else 
    {
        /*
        enter = 7 
        check i = 2 start ---> 6 
        2,3,4,5,6 divide 7  ===> divided completely  ==>Not a prime number       
        */
        for (int i = 2; i < num;  i++ )
        {
            // logic for Not a Prime Number
            if( num % i == 0)
            {
                Is_prime = false;
                break;
            }
        }


        //check and display the Prime Number and Not a Prime Number 
        if(Is_prime)
        {
            cout<<"The Number "<<num<<" is Prime Number "<<endl;
        }

        else
        {
            cout<<"The Number "<<num<<" is Not a Prime Number"<<endl;
        }


    }

}