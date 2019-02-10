#include <iostream>

using namespace std;

int main()

{
	/*ÇÀÄÀÍÈÅ 1*/
	/*int a;
	cin >> a;
	int first = a / 100;
	int second = a / 10 % 10;
	int third = a % 10;
	cout << first + second + third << endl;*/



	/*ÇÀÄÀÍÈÅ 2*/
	/*int usertime;
	int first_h;
	int first_m;
	int first_s;
	cin >> first_h >> first_m  >> first_s;


	int second_h;
	int second_m;
	int second_s;
	cin >> second_h >> second_m >> second_s;

	int total_sec_first = first_h * 60 * 60 + first_m * 60 + first_s;

	int total_sec_second = second_h * 60 * 60 + second_m * 60 + second_s;

	int difference = total_sec_second - total_sec_first;
	cout << difference;*/




	/*ÇÀÄÀÍÈÅ 3*/
	//int day;
	//cin >> day;

	//int month;
	//cin >> month;

	//int year;
	//cin >> year;

	///*êîıôôèöåíòû*/
	//int a;
	//a = (14 - month) / 12;
	//int y;
	//y = year + 4800 - a;
	//int m;
	//m = month + 12 * a - 3;

	//int JDN;
	//JDN = day + ((153 * m + 2) / 5) + (365 * y) + (y / 4) - (y / 100) + (y/400) - 32045;

	//cout << JDN;




	/*ÇÀÄÀÍÈÅ 4*/
	/*int users_sec;
	cin >> users_sec;

	int hours = (users_sec / 60) / 60;	
	cout <<  hours << ':';
	users_sec = users_sec - (hours * 60 * 60 );

	int minutes;
	minutes = users_sec / 60;
	int ten_m;
	ten_m = minutes / 10;
	minutes = minutes - ten_m * 10;
	cout << ten_m << minutes << ':';
	users_sec = users_sec - (minutes * 60 + ten_m * 600);

	int seconds;
	seconds = users_sec;
	int ten_s;
	ten_s = seconds / 10;
	seconds = seconds - ten_s * 10;
	cout << ten_s << seconds;*/
}