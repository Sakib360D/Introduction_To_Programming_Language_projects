#include<iostream>
#include<fstream>
#include<istream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include <iomanip>
#define WINWIDTH 113
#define WINHEIGHT 15
using namespace std;
class bookshop{
public:
void login();
void account();
void admin();
void addbook();
void showallbook();
void modify();
void stock_details();
void purbook();
void Balance();
void filler();
void liner();
void welcome();
};

main()
{
bookshop  r;
    r.welcome();
    cout << endl << "\t\t\t\tPress any key to Enter Book Shop System" << endl;
    getch();

    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_GREEN);

        int choice;
        system("cls");
        cout<<"\t\t\t\t*************************************************************************\n\n";
        Sleep(100);
        cout<<"\t\t\t\t=======================Welcome to Bookshop===============================\n\n";
        Sleep(100);
        cout<<"\t\t\t\t*******************       Main MENU        *******************************\n\n";
        Sleep(100);
        cout<<"\t\t\t\t                        1.Customer LOGIN"<<endl;
        Sleep(100);
        cout<<"\t\t\t\t                        2.CREATE Your ACCOUNT"<<endl;
        Sleep(100);
        cout<<"\t\t\t\t                        3.Admin LogIn"<<endl;
        Sleep(100);
        cout<<"\t\t\t\t                        4.Show all books"<<endl;
        Sleep(100);
        cout<<"\t\t\t\t                        5.Exit"<<endl;
        Sleep(100);
        cout<<"\t\t\t\t\n                    Enter your choice :";
        Sleep(100);
        cin>>choice;
      Sleep(100);
        cout<<endl;
        switch(choice)
        {
                case 1:
                        r.login();
                        break;
                case 2:
                        r.account();
                        break;
                case 3:
                        r.admin();
                        break;

                case 4:
                        r.showallbook();
                        break;
                case 5:

                        cout<<"\t\t\t\tThanks for choosing this bookshop\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"\t\t\t\tSorry, you enter the wrong input. Please try again.\n"<<endl;
                        main();
        }

}
void bookshop::login()
{
        int count,ch;
        string user,password,a,b;
        system("cls");
        cout<<"Please give the right information\t\t"<<endl;
        cout<<"\n\tGIVE THE USERNAME :";
        cin>>user;
        cout<<"\n\tTYPE THE PASSWORD :";
        cin>>password;

        ifstream input("buyerinfo.txt");
      while(input>>a>>b)
        {
                if(a==user && b==password)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"Hello "<<user<<" Login successfully done\nWe're happy that you're here.\nThanks for logging in\n\nPress any key to Enter to Book shop";
                cin.get();
                cin.get();
system("cls");
                string line;

      ifstream file4("book.txt");
      cout<<"\t\t\tShowing available Books\n\n"<<endl;
      while(getline(file4,line))
    {
        cout<<line<<endl;

    }
    cout<<"\t\t\t|------------------------------|\n"<<endl;
    cout<<"\t\t\t|*Press Enter To Purchase Book*|\n"<<endl;
    cout<<"\t\t\t|------------------------------|\n\n"<<endl;
    getch();


                purbook();
                main();
        }
        else
        {
                cout<<"\t\t\t\t\nLOGIN ERROR\nPlease check your username and password and try again\n";

                cout<<"\t\t\t\t\n***Enter [1] to try again\n";

                cout<<"\t\t\t\t\n***Press any [key] to go main menu\n";
                cin>>ch;


                if(ch==1)
        {

                login();
        }
                else{cout<<"\nGoing To Main Menu\n";
                Sleep(50);
                        main();}
        }
}
void bookshop::account()
{
               HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
            SetConsoleTextAttribute(h,FOREGROUND_RED|FOREGROUND_GREEN);
        string sa,jj,hhh,ii,kk,acuser,acpass,address,num,g;
        system("cls");
        cout<<"*******************       Create Account        *******************************\n\n";
        cout<<"Enter the username :";
        cin>>acuser;
        cout<<"Enter the password :";
        cin>>acpass;
        g=acpass;
        cout<<"Confirm Your password:";
        cin>>kk;
        if(g!=kk){

            cout<<"The password is not matched!........"<<"Please Try again";
            cout<<"\nPress any key to try again\n";
            getch();
           account();


        }

        cout<<"Phone number :";
        cin>>num;
        cout<<"Account Created Successfully";
        system("cls");
        cout<<"\nAccount Created Successfully\n\tYou can now login our bookshop\n";

        ofstream ac("buyerinfo.txt",ios::app);
        ac<<acuser<<' '<<acpass<<endl;
        system("cls");
        main();

}

void bookshop::admin()
{
        HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,FOREGROUND_GREEN|FOREGROUND_INTENSITY);

   char c='  ';
   string pass="";
   string uname;
   system("cls");
   cout<<"ENTER Username : ";
   cin>>uname;
   cout<<"Enter password : ";
   while (c!=13)
   {
     c=getch();
     if (c!=13)
     {
        pass+=c;
        cout<<"*";
     }

   }
   if(uname=="admin" && pass=="admin"){
        cout<<"\n\n\t\tSuccessfully login done\n\n"<<endl;

        int choose;

        cout<<"1.Addbook"<<endl;
        Sleep(50);
        cout<<"2.Modify"<<endl;
        Sleep(50);

        cout<<"3.Stock_details"<<endl;
         Sleep(50);


        cout<<"4.Balance"<<endl;
        cin>>choose;
        switch(choose)
        {
        case 1:
              addbook();
              {
  cout<<"Book added successfully\n\n";
  main();

  }
  case 2: modify();break;

   case 3:stock_details();break;



   case 4:Balance();
   break;
        default:
             cout<<"Try again";
        }
   }
   else {cout<<"\n\n\t\tSorry, somethings wrong\n\nTry again with valid username or password\n\n";}

   admin();
}

void bookshop::addbook()
{
  cin.clear();
  cin.sync();
  string title, name, code, price, stock;
  char adm;
  system("cls");
      cout<<"\t\t\t\tEnter Book Title : ";
      getline(cin,title);
      cout<<"\t\t\t\tEnter Author Name : ";
      getline(cin,name);
      cout<<"\t\t\t\tEnter The Price : ";
      getline(cin,price);
      cout<<"\t\t\t\tEnter The stock : ";
      cin>>stock;
      cout<<"\t\t\t\tEnter Book Code : ";
      cin>>code;
      ofstream file3("book.txt",ios::app);
      file3<<"\t\t\tBook Title : "<<title<<endl;
      file3<<"\t\t\tAuthor Name : "<<name<<endl;
      file3<<"\t\t\tPrice : "<<price<<endl;
      file3<<"\t\t\tStock Remaining : "<<stock<<endl;
      file3<<"\t\t\tBook Code : "<<code<<"\n\t"<<endl;

  cout<<"Book added successfully\n\n";
  cout<<"\nYou want to add another book [Y/N]\n\n";
  cin>>adm;
  if(adm=='Y' || adm =='y')
  {
      addbook();
  }
else{main();}

  }
  void bookshop::showallbook()
  {

      string line;
      system("cls");
      ifstream file4("book.txt");
      cout<<"\t\t\tShowing All Books......\n\n"<<endl;
      while(getline(file4,line))
    {
        cout<<line<<endl;

    }
     cout<<"Press any key to go main menu ......\n\n"<<endl;
        getch();
    main();
  }
void bookshop::modify()
 {
             system("cls");
string changes;
string title, name, code, price, stock;
  system("cls");
      cout<<"1.Delete Book Title  "<<endl;

      cout<<"2.Change Author Name "<<endl;;
       cout<<"3.Change Price  "<<endl;


      cout<<"4.Change Book Code "<<endl;
      cin>>changes;
      ofstream file3("book.txt",ios::app);
      file3<<"\t\t\t\tBook Title : "<<title<<endl;
      file3<<"\t\t\t\tAuthor Name : "<<name<<endl;
      file3<<"\t\t\t\tPrice : "<<price<<endl;
      file3<<"\t\t\t\tStock Remaining : "<<name<<endl;
      file3<<"\t\t\t\tBook Code : "<<code<<"\n\t"<<endl;
      system("cls");

  cout<<" \t\t\t\tSuccessfully Modified\n\n";
  main();
 }

void bookshop::stock_details()
 {
          system("cls");


   string line;
      system("cls");
      ifstream file4("book.txt");
      cout<<"All Books......\n\n"<<endl;
      while(getline(file4,line))
    {
        cout<<line<<endl;

    }
     cout<<"Press any key to go main menu ......\n\n"<<endl;
        getch();
    main();

 }



void bookshop::Balance()
{
          system("cls");
string ff;
  system("cls");
      cout<<"1.Profit "<<endl;
        cout<<"2.Loss"<<endl;
      cin>>ff;
     system("cls");

  cout<<" No Profit\n\n";
  main();
}


 void bookshop::liner()
{
    for(int i = 0 ; i < WINHEIGHT ; i++)
        cout << endl;

}
     void bookshop::welcome()
{
    liner();
    cout << "Loading..." << endl;
    Sleep(10);
    char msg[] = "Welcome to Bookshop";
    int len = strlen(msg);
    int x;
    x = (WINWIDTH/2) - (len/2);
    for(int i = 0 ; i < WINWIDTH ; i++)
    {
        printf("%c",177);
        Sleep(15);

    }
    cout << endl;
    system("CLS");
    liner();
    filler();
    cout << setw(len+x) << msg << endl;
    filler();

}

         void bookshop::filler()
{
    for(int i = 0 ; i < WINWIDTH ; i++)
    {
        cout << "*";
    }
    cout << "\a" << endl;
}
void bookshop :: purbook()
{
        int count;
        float cd,h,price;


        cout<<"Please give the right information\t\t"<<endl;
        cout<<"\n\tGIVE THE BOOK CODE You Want To Buy:";
        cin>>cd;
        fstream output("book.txt",ios::app);
        fstream file4("book.txt",ios::app);


        while(file4>>cd)
        {
                if(cd==h)

                {
                        count=1;
                        system("cls");
                }
}
         file4.close();
          if(count==1)
        {
                cout<<"Book purchased"<<cd<<"\nTotal amount : "<<price;
                cin.get();
                cin.get();
                main();
        }
        else
        {
                cout<<"\nEror code";
                cout<<"\nPress any key to try again\n";
                getch();
                main();
        }
}

