#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{

	const double A_PLUS = 4.0;
    const double A = 3.75;

	const double B_PLUS = 3.50;
	const double B = 3.25;

	const double C_PLUS = 3.00;
	const double C = 2.75;

	const double D_PLUS = 2.50;
	const double D = 2.25;

	const double F = 0.0;

	string lettergrade;
 	double credit;
    double point = 0;
    double totalpoint = 0;
    double totalcredit = 0;
    double finalgpa = 0;
    int option;
    int course,i=0;
    cout<<"\n\t\t\tHow many Course You want calculate : ";
    cin>>course;


 	for(i=0; i<course; i++)
    {
        cout<<"\t\t\t\n ----------------------";
        cout<<"\t\t\t\n |---------------------|";
        cout<<"\t\t\t\n | Enter letter grade  |=> ";
        cout<<"\t\t\t\n |---------------------|";
        cout<<"\t\t\t\n ----------------------";
        cin>>lettergrade;
        cin.ignore();
         cout<<"\t\t\t\n ---------------------------";
         cout<<"\t\t\t\n |-------------------------|";
         cout<<"\t\t\t\n | Enter the course credit |=> ";
         cout<<"\t\t\t\n |-------------------------|";
         cout<<"\t\t\t\n ---------------------------";
        cin>>credit;


		if(lettergrade == "a+" || lettergrade == "A+")
		{
			point = credit * A_PLUS;
		}
		else if(lettergrade == "a" || lettergrade == "A")
		{
			point = credit * A;
		}
		else if(lettergrade == "b+" || lettergrade == "B+")
		{
			point = credit * B_PLUS;
		}
		else if(lettergrade == "b" || lettergrade == "B")
		{
			point = credit * B;
		}

		else if(lettergrade == "c+" || lettergrade == "C+")
		{
			point = credit * C_PLUS;
		}
		else if(lettergrade == "c" || lettergrade == "C")
		{
			point = credit * C;
		}

		else if(lettergrade == "d+" || lettergrade == "D+")
		{
			point = credit * D_PLUS;
		}

		else if(lettergrade == "d" || lettergrade == "D")
		{
			point = credit * D;
		}
		else if(lettergrade == "f" || lettergrade == "F")
		{
			point = credit * F;
		}
		else
		{
			cout<<"Invaild Input...";
		}


          totalcredit = totalcredit + credit;
          totalpoint = totalpoint + point;


 	}

          finalgpa = totalpoint/totalcredit;
          cout<<"Student's GPA: "<<finalgpa<<"\n";


	return 0;
}
