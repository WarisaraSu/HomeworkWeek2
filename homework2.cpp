#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name,Surname;
	double Salary;
	float Sale;
	short Commission_Percent;
	float Total;
	cout << "***Homework 2***********" << endl;
    cout << "Enter Name   : " ;
	cin >> Name >> Surname;
	cout << "Enter Salary : ";
    cin >> Salary;
	cout << "Enter Sale   : ";
    cin >> Sale;
	cout << "Enter Commission Percent : ";
    cin >> Commission_Percent;
	cout << "------output----------" << endl;
    Total = (Sale*5/100)+Salary;
	cout << "Your Name = " << Name << " " << Surname << endl;
	cout << "Total Revenue  " << Total << " Bath" <<  endl;
	cout << "-------------------------------" << endl;
system("pause");
return (0) ;
}