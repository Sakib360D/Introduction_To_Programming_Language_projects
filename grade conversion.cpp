#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;

    cout<<"Grade Conversion";
    cout<<"\n\nThis Programme can Convert the Numerical Value to letter Grade and Show Grade Point";
    cout<<"\n\nCreated By: MAHMODUL HASAN TONMOY";
    cout<<"\n\nID: 20-42642-1";
    cout<<"\n\nWRITE OK TO CONTINUE............";


    cout<<"\n\nEnter the marks:";
    cin>>a;
    if (a>=90&& a<=100)
    cout<<"Grade A+  and Point 4.00";
    else
    if (a>=85 && a<90)
    cout<<"Grade A  and Point 3.75";
    else
    if (a>=80 && a<85)
    cout<<"Grade B+  and Point 3.50";
    else
    if (a>=70 && a<80)
    cout<<"Grade C  and Point 3.25";
    else
    if (a<60 && a>=70)
    cout<<"Grade D  and Point 3.00";
    else
    if (a>100 || a<0)
    cout<<"Out Of Range!!";
    return 0;
}
