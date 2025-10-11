#include<iostream>
using namespace std;

int main()
{
    //find the  Trnaspose  of any matrix
    int X[2][2], transpose_X[2][2];

    cout<<"Enter the Values for Matirx A:";
    for(int  a =0; a<2; a++)
    {
        for(int j =0; j<2; j++)
        {
            cin>>X[a][j];
        }
    }


    // Before Transpose of matrix
    cout<<"*********"<<endl;
    cout<<"Matirx A:"<<endl;


    for(int i =0; i<2; i++)
    {
        for(int j =0; j<2; j++)
        {
            cout<<X[i][j]<<" ";
        }

        cout<<endl;
    }


    // Logic for transpose
    for(int b =0; b<2; b++)
    {
        for(int c =0; c<2; c++)
        {
            transpose_X[c][b] = X[b][c];
        }
    }

    cout<<"*********"<<endl;
    cout<<"Matirx A Transpose:"<<endl;
    // Display the trnapsose of Matrix

    for(int a =0; a<2; a++)
    {
        for(int b =0; b<2; b++)
        {
            cout<<transpose_X[a][b]<<" ";
        }

        cout<<endl;
    }
}