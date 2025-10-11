#include<iostream>
#include<string>
using namespace std;

int main()
{

    string val ;
    cout<<"Enter the String Values :";
    // cin>>val;
    getline(cin, val);


    int vowel = 0; int consonent = 0;

    for(int i =0; i<val.length(); i++)
    {
        char ch = val[i];
        if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u' || ch =='A'|| ch=='E'|| ch =='O'||ch == 'I'|| ch == 'U')
        {
            vowel++;
        }

        else{
            consonent++;
        }
        
    }

    cout<<"Vowel :"<<vowel<<endl;
    cout<<"Consonent :"<<consonent<<endl;
    

}