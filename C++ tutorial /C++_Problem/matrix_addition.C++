#include<iostream>
using namespace std;

int main()
{
    // Find the Addition of two Matrices of 2 X 2
    int A[2][2], B[2][2],sum[2][2];

    cout<<"Enter the Values for Set A:";

    //User Input  at Runtime
    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cin>>A[i][j];
        }
    }

    cout<<"Enter the Values for Set B:";

    //USer Input  at Runtime
    for(int i = 0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cin>>B[i][j];
        }
    }


    //Display the Matric A  and B
    cout<<"Set A:"<<endl;
    for(int i =0 ; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"**********"<<endl;
    cout<<"Set B:"<<endl;

    for(int i =0 ; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }

    // Sum of Two Matrices
    
    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            // sum[i][j] = A[i][j] + B[i][j]; // if you find Sum of two matrice then this one remove the comment and use
            // sum[i][j] = A[i][j] - B[i][j]; // if you find the sub of two matrice then this one remove the comment and use
        }
    }
    cout<<"*************"<<endl;
    // cout<<"Addition of Two Matric A and B:"<<endl; // this mesage for addition 
    // cout<<"Subtraction of Two Matric A and B:"<<endl; // this message for subtraction

    //Sum of two Matirces Display
    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }






}