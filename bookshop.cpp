#include <iostream>
using namespace std;

int failure=0;
int success=0;
void Trans(int a)
{
    if(a==0)
        failure++;
    else
        success++;
}
class book
{
private:
    int bookcode;
    string author;
    string title;
    double price;
    string publisher;
    int stock;

    void priceUpdate()
    {
        cout<<"\nEnter the new price: ";
        cin>>price;
        cout<<endl;
    }
    void stockUpdate()
    {
        cout<<"\nEnter the new stock: ";
        cin>>stock;
        cout<<endl;
    }
public:
    book(int u,string x,string y,string z, double w, int v)
    {
        bookcode=u;
        title=x;
        author=y;
        publisher=z;
        price=w;
        stock=v;
    }
    book(string x,string y)
    {
        author=x;
        publisher=y;
    }
    int search(book x)
    {
        if(author==x.author&&publisher==x.publisher)
            return 1;
        else
            return 0;
    }
         void noOfcopies()
    {
        int n;
        cout<<"\nBook Details: "<<endl;
        showdetail();
        cout<<"Enter required number of copies: ";
        cin>>n;
        if(n>stock)
        {
            cout<<"Required copies is not in stock"<<endl;
            Trans(0);
        }
        else
        {
            cout<<"Total cost of the books: "<<n*price<<endl;
            stock=stock-n;
            cout<<"\nRemaining stock: "<<stock<<endl;
            Trans(1);
        }
    }
   void showdetail()
    {
        cout<<"Book code: "<<bookcode<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Publisher: "<<publisher<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"The stocks available: "<<stock<<endl;
        cout<<endl;
    }
    void update()
    {
        int x;
        cout<<"Select what to update\n1.Price\n2.Stock"<<endl;
        cin>>x;
        if(x==1)
            priceUpdate();
        else
            stockUpdate();
    }
};

    book p1(111,"Feluda Shomogro 1","Satyajit Ray","A",211.5,10);
    book p2(112,"Feluda Shomogro 2","Satyajit Ray","B",250,14);
    book p3(113,"Shei Somoy","Sunil Gangopadhyay","C",312.5,14);
    book p4(114,"Hajar Bocor Dhore","Zahir Raihan","D",156,7);
    book p5(115,"Dipu No 2","Muhammed Zafar Iqbal","E",235,4);


void seller()                                                    // seller options
{
    int a,n;
    while(1){
    cout<<"Enter ur choice: \n1.Show books\n2.Update\n3.Transactions\n4.Exit"<<endl;
    cin>>a;
    cout<<endl;
    switch(a)
    {
        case 1: cout<<"\nBook Details: "<<endl;
                p1.showdetail();
                p2.showdetail();
                p3.showdetail();
                p4.showdetail();
                p5.showdetail();
                break;

        case 2: cout<<"Book Update"<<endl;
                cout<<"Enter the book code which has to be updated: ";
                cin>>n;
                if(n==111)
                    p1.update();
                else if(n==112)
                    p2.update();
                else if(n==113)
                    p3.update();
                else if(n==114)
                    p4.update();
                else if(n==115)
                    p5.update();
                else
                    cout<<"Invalid"<<endl;
                    break;

        case 3: cout<<"Total failed transaction: "<<failure<<endl;
                cout<<"Total successful transaction: "<<success<<endl;
                cout<<endl;
                break;
        case 4:
                return;
    }
   }
}
void customer()
{
    int x;
    while(1)
    {
        cout<<"\nEnter a option \n1.Show Books\n2.Purchase a book\n3.Exit"<<endl;
        cin>>x;
        if(x==1)
        {
            cout<<"\nBook Details: "<<endl;
            p1.showdetail();
            p2.showdetail();
            p3.showdetail();
            p4.showdetail();
            p5.showdetail();
        }

        else if(x==2)
        {
            string a;
            string b;
            cout<<"Enter author name: ";
            cin>>a;
            cout<<"Enter publisher name: ";
            cin>>b;
            book p6(a,b);
            if(p6.search(p1)==1)
                p1.noOfcopies();
            else if(p6.search(p2)==1)
                p2.noOfcopies();
            else if(p6.search(p3)==1)
                p3.noOfcopies();
            else if(p6.search(p4)==1)
                p4.noOfcopies();
            else if(p6.search(p5)==1)
                p5.noOfcopies();
            else
            {
                cout<<"This book is not available"<<endl;
                Trans(0);
            }
        }
        else
            return;
    }
}

int main()
{
    int a;
    while(1)
    {
        cout<<"\nSelect any one\n1.Seller\n2.Customer\n3.Exit"<<endl;
        cin>>a;
        cout<<endl;
        if(a==1)
            seller();
        else if(a==2)
                customer();
        else
            return 0;
    }
}
