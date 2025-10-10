#include<iostream>
using namespace std;

int main()
{
    int eng, urdu, islam, phy, chem, math;

    cout<<"Enter the English Marks:";
    cin>>eng;


    cout<<"Enter the Urdu Marks:";
    cin>>urdu;


    cout<<"Enter the Islamyoat Marks:";
    cin>>islam;

    cout<<"ENter the Physics Marks:";
    cin>>phy;


    cout<<"Enter the Chemistry Marks:";
    cin>>chem;

    cout<<"Enter the Maths Marks:";
    cin>>math;


    // Display the Subject Marks 
    cout<<" ******* Subject Marks *******"<<endl;

    cout<<"English :"<<eng<<":  Urdu :"<<urdu<<": Islamyiat :"<<islam<<endl;
    cout<<"Physics :"<<phy<<": Chemistry :"<<chem<<": Maths :"<<math<<endl;


    //Calculate the Obtained Marks of Student 

   cout<<" ******* Student Obtained Marks  *******"<<endl;
    float  obtained_marks = eng + urdu +islam + phy + chem + math;
    cout<<"Student Obtained Marks :"<<obtained_marks<<" Out of 600"<<endl;


    // Calculate Persnetage 
    float Persentage = (obtained_marks / 600) * 100;
    cout<<"Student Persentage is :"<<Persentage<<"%"<<endl;

    // Calculate the Average 
    float Avg = obtained_marks / 6 ;
    cout<<"Student Average is :"<<Avg<<endl;


    // Pass and fail

    if( Persentage >= 90)
    {
        cout<<"Grade A+"<<endl;
        cout<<"Pass"<<endl;
    }

    else if(Persentage >= 80)
    {
        cout<<"Grade A"<<endl;
        cout<<"Pass"<<endl;
    }

    else if( Persentage >= 70)
    {
        cout<<"Grade B"<<endl;
        cout<<"Pass"<<endl;
    }


    else if( Persentage >=60)
    {
        cout<<"Grade C"<<endl;
        cout<<"Pass"<<endl;
    }

    else if( Persentage >= 50)
    {
        cout<<" Grade D"<<endl;
        cout<<"Pass"<<endl;
    }
    
    else if (Persentage >= 40)
    {
        cout<<"Grade E"<<endl;
        cout<<"Pass"<<endl;
    }

    else if( Persentage >= 33)
    {
        cout<<"Grade F"<<endl;
        cout<<"Fail"<<endl;
    }

    else{
        cout<<"Fail"<<endl;
    }
}