/*
            char datatype as a String
            char a = 'B';
            string b = "Hello this is string";

            ******** char array *****
            char display[5] = "Good";

*/


#include<iostream>
using namespace std;

int main()
{
    // Initialize char array
    char  display[5] = "Good";

    cout<<"Initialize values Display of char array :"<<endl;

    //display the Initialize value of char array 
    cout<<display<<endl;

    //display the Runtiime values  
    char hello[12] ;
    cout<<"Enter the values for char array :"<<endl;
    // cin>>hello;
    cin.getline(hello, 12);

    cout<<"The output of Runtime values"<<endl;
    //Display 
    cout<<hello<<endl;

}

