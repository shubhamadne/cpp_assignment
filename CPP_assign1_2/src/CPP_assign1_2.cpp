//============================================================================
// Name        : CPP_assign1_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

typedef enum {EXIT, INIT_DATE, ACCEPT_DATE, PRINT_DATE, LEAP_YEAR}MENU;

class date
{
private:
	int dd;
	int mm;
	int yy;
public:
	date()
	{
		this->dd = 01;
		this->mm = 01;
		this->yy = 2020;
	}
	void accept_date()
	{
		cout<<"\n Enter Day :";
		cin>>dd;

		cout<<"\n Enter Month : ";
		cin>>mm;

		cout<<"\n Enter Year : ";
		cin>>yy;
	}
	void print_date()
	{
		cout<<"Date is :"<<dd<<"-"<<mm<<"-"<<yy;
	}
	bool isLeapYear()
	{
		cout<<"Enter Year :";
		cin>>yy;
		if(yy % 4 == 0)
			return 1;
			//cout<<"Leap Year..!!";
		else
			return 0;
			//cout<<"Not Leap Year..!!";
	}
};

int menu_list()
{
	int choice;

	cout<<"\n 0.EXIT";
	cout<<"\n 1.Initiate Date";
	cout<<"\n 2.Accept date";
	cout<<"\n 3.Print Date";
	cout<<"\n 4.Check Leap Year";
	cout<<"\n Enter Choice";

	cin>>choice;

	return choice;
}
int main()
{
	int choice;
	date dt;
	while((choice = menu_list()) != 0)
	{
		switch(choice)
		{
		case INIT_DATE:
			dt.print_date();
			break;
		case ACCEPT_DATE:
			dt.accept_date();
			break;
		case PRINT_DATE:
			dt.print_date();
			break;
		case LEAP_YEAR:
			if(dt.isLeapYear())
				cout<<"Leap Year..!!";
			else
				cout<<"Not Leap Year..!!";
			break;
		}
	}
	return 0;
}
