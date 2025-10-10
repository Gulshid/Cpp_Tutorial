#include<iostream>
using namespace std;

int main()
{
    //find the  Initialize array element
    int arra_1[6]= {2,4,5,6,8,10};

    int sum = 0;

    // for loop for displaying and sum the array element 
    for(int i = 0; i < 6; i++)
    {
        sum = sum + arra_1[i];
    }


    cout<<"The Sum of Array_1 Element is :"<<sum<<endl;


    cout<<"**********"<<endl;


    int arra_2[6];
    cout<<"Enter the Element for Array_2:";
    // USer INput runtime 
    for(int a = 0 ; a<6; a++)
    {
        cin>>arra_2[a];
    }


    int add = 0;
    // Displaying the Sum of array Element
    for(int b = 0; b < 6; b++)
    {
        add = add + arra_2[b];
    }


    cout<<"The Sum of array_2 Element :"<<add<<endl;
}