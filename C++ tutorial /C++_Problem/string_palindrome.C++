#include <iostream>
#include <string>
using namespace std;

int main() 
{

    // Write a Program that can find the Palindrome of string 
    string str_1;
    cout<<"Enter the String:";
    cin>>str_1;


    int start = 0;
    int end = str_1.length() - 1;
    bool Palindrome = true;


    while(start < end)
    {
        if(str_1[start] != str_1[end])
        {
            Palindrome =false;
            break;
        }

        start++;
        end--;
    }


    if(Palindrome)
    {
        cout<<"The Stirng is Palindrome "<<endl;
    }
    else
    {
        cout<<"The String is Not a Palindromn"<<endl;
    }




}