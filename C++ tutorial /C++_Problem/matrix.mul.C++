// Find the Multiplication of two matrices A and B of 2 X 2
#include<iostream>
using namespace std;

int main()
{
    int A[2][2], B[2][2], mul[2][2];

    cout<<"Enter the Values for MAtrice A:"<<endl;

    // Input from USer at Runtime
    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cin>>A[i][j];
        }
    }


    cout<<"Enter the Values for MAtrice B:"<<endl;

    // Input from USer at Runtime
    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cin>>B[i][j];
        }
    }


    // Display the MAtric A and B
    cout<<"**********<"<<endl;
    cout<<"Matrice A:"<<endl;

    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<A[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<"**********<"<<endl;
    cout<<"Matrice B:"<<endl;

    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<B[i][j]<<" ";
        }

        cout<<endl;
    }


    //Assign Zero to Mul

    for(int i=0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            mul[i][j] = 0;
        }
    }


    //Multiplication of two matrice A and B

    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            for(int k =0; k<2; k++)
            {
                mul[i][j] = mul[i][j] + A[i][k] * B[k][j];
            }
        }
    }


    // Display the Multiplication of two Matirce A and B
    cout<<"**********"<<endl;

    cout<<"Multiplication of A and B:"<<endl;

    for(int i =0; i<2; i++ )
    {
        for(int j =0; j<2; j++)
        {
            cout<<mul[i][j]<<" ";
        }

        cout<<endl;
    }



}