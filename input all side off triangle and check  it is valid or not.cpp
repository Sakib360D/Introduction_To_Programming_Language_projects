#include<iostream>
using namespace std;
int main()
{

int side1, side2, side3;

cout<<"Enter three side of Triangle........"<<endl;

cout<<"------------------------------------------------------"<<endl;

cout<<"Enter First side of Triangle"<<endl;
cin>>side1;
cout<<"Enter Second side of Triangle"<<endl;
cin>>side2;
cout<<"Enter Third side of Triangle"<<endl;
cin>>side3;





    if((side1 + side2) > side3)
    {
        if((side2 + side3) > side1)
        {
            if((side1 + side3) > side2)
            {

                cout<<"Triangle is valid."<<endl;
            }
            else
            {
                cout<<"Triangle is not valid."<<endl;
            }
        }
        else
        {
            cout<<"Triangle is not valid."<<endl;
        }
    }
    else
    {
        cout<<"Triangle is not valid."<<endl;
    }





return 0;
}

