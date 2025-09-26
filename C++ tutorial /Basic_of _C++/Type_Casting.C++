#include<iostream>
using namespace std;

int main()
{
    // int ---> float 
    int a= 23;
    float b =float(a);
    cout<<"int a :"<<a<<endl;
    cout<<"float b :"<<b<<endl;

    cout<<"************"<<endl;

    // float ---> int 
    float c = 3.2;
    int d =int(c);
    cout<<"float c :"<<c<<endl;
    cout<<"int d :"<<d<<endl;

cout<<"************"<<endl;
    // char ---> int 

    char e = 'A';
    int f = int(e);  // ASCII Code 

    cout<<"char e:"<<e<<endl;
    cout<<"int f :"<<f<<endl;

cout<<"************"<<endl;

    //int ---> char 
    int g= 98; // char b
    char h= char(g); 

    cout<<"int g :"<<g<<endl;
    cout<<"char h :"<<h<<endl;

cout<<"************"<<endl;
//int ---> bool 
int i = 0;
int k =1;
bool l=bool(k);
bool j = bool(i);
cout<<"int i :"<<i<<endl;
cout<<"bool j :"<<j<<endl;
cout<<"------"<<endl;
cout<<"int k :"<<k<<endl;
cout<<"bool l :"<<l<<endl;
cout<<"************"<<endl;



//bool ---> int

bool o = true;
bool p = false;

int r= int(o);
int s = int(p);

cout<<"bool o :"<<o<<endl;
cout<<"int r :"<<r<<endl;

cout<<"-----"<<endl;
cout<<"bool p :"<<p<<endl;
cout<<"int s :"<<s<<endl;
cout<<"************"<<endl;


// char ----> bool
char x = 'B';
bool y =bool(x);

cout<<"char x :"<<x<<endl;
cout<<"bool y :"<<y<<endl;
cout<<"-----"<<endl;










}