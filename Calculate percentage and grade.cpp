#include<iostream>
using namespace std;
int main()
{


int phy,chem,bio,math,comp,score;

cout<<"Enter Your Five Subjects score( 0-100 ): "<<endl;
cout<<"Physics : ";
     cin>>phy;

     cout<<"Chemistry : ";
     cin>>chem;

     cout<<"Biology : ";
     cin>>bio;

     cout<<"Mathematics : ";
     cin>>math;

     cout<<"Computer : ";
     cin>>comp;
score=(phy+chem+bio+math+comp)/5;

if(score>=90 && score<=100)
    cout<<"Percentage is "<<score<<"% , Your grade is A+ "<<endl;

 else if(score>=80 && score<=90)
    cout<<"Percentage is "<<score<<"% , Your grade is A "<<endl;

    else if(score>=70 && score<=80)
    cout<<"Percentage is "<<score<<"% , Your grade is B "<<endl;
    else if(score>=60 && score<=70)
    cout<<"Percentage is "<<score<<"% , Your grade is C "<<endl;
    else if(score>=40 && score<=60)
    cout<<"Percentage is "<<score<<"% , Your grade is D "<<endl;

    else
    cout<<"Your grade is F "<<endl;

    return 0;






return 0;
}

