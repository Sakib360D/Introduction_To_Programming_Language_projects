#include<iostream>
using namespace std;
int main()
{

char input;
cout<<"Press any one key on Keyboard........";
cin>>input;

if((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z'))
    {
        cout<<input<<"  is alphabet.";
    }
    else if(input >= '0' && input <= '9')
    {
        cout<<input<<"  is digit.";
    }
    else
    {
        cout<<input<<"  is special character.";
    }






return 0;
}

