#include<iostream>
using namespace std;
int main()
{

float buy,sell;
double profit,loss;

cout<<"Enter buy price : ";
cin>>buy;

cout<<"Enter sell price : ";
cin>>sell;


profit=sell-buy;
loss=buy-sell;

if(profit>0){

  cout<<"Your Profit : "<<profit<<endl;
}
else
{cout<<"Your Loss : "<<loss<<endl;}

return 0;
}

