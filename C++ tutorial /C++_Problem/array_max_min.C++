#include<iostream>
using namespace std;

int main()
{
    // find the max and min value in array
    int arr[6] = {2,6,4,8,13,6};

    int max = arr[0];
    int min = arr[0];


    for(int a = 1 ; a < 6; a++)
    {
        if(arr[a] > max)
            max = arr[a];
        if(arr[a] < min)
            min = arr[a]; 
    }


    cout<<"The Max value of Array :"<<max<<endl;
    cout<<"The Min value of Array :"<<min<<endl;
}