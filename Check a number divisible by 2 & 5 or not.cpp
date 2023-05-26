#include<iostream>
using namespace std;
int main()
{
int num,result1,result2;

cout<<"Enter a number to check it Divisible by 2 &5 or Not ....."<<endl;
cin>>num;

result1=num%2;
result2=num%5;
if(result1==0 && result2==0){

    cout<<num<<" is  Divisible By 2 & 5"<<endl;

}


else{

    cout<<num<<" is  not Divisible By 2 & 5"<<endl;
}




return 0;
}

