#include<iostream>
#include <string>
using namespace std;

int main()
{
    // string functions
    // function apply

    string str = "Hello";

    cout<<str<<endl;

    // 1 . find the len() of string
    cout<<"The length of string :"<<str.length()<<endl;

    //2 . index wise letter 
    cout<<"Index 1 :"<<str.at(1)<<endl;

    // 3.front and back() 
    cout<<"The first letter :"<<str.front()<<" , the last letter :"<<str.back()<<endl;

    // 4. appends()
    cout<<"The appends:"<<str.append(" World")<<endl;

    // 5. insert()
    cout<<"Insert:"<<str.insert(3, " HI ")<<endl;

    // 6. sub string ()
    cout<<"The substring :"<<str.substr(0,10)<<endl;

    // 7. replace()
    cout<<"The Replace :"<<str.replace(0,5, "ab")<<endl;












}