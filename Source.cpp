#include <iostream>
#include <cmath>

using namespace std;

//task 1

////part 1
//struct Point
//{
//	float x;
//	float y;
//};
//
//
//int main()
//{
//	setlocale(0, "");
//	Point poi;
//	cin >> poi.x >> poi.y;
//	int r;
//	cin >> r;
//	if (((poi.x * poi.x) + (poi.y * poi.y)) <= r * r)
//	{
//		cout << "принадлежит";
//	}
//	else { cout << "не принадлежит"; }
//}

//part 2
//struct Point
//{
//	float x;
//	float y;
//};
//
//
//int main()
//{
//	Point x;
//	cin >> x.x >> x.y;
//	Point x2;
//	cin >> x2.x >> x2.y;
//	Point mid;
//	mid.x = (x.x + x2.x) / 2;
//	mid.y = (x.y + x2.y) / 2;
//	cout << mid.x << ";" << mid.y;
//}



//task 2

//struct Point
//{
//	int x;
//	int y;
//};
//struct Circle
//{
//	int r;
//	Point cent;
//};
//
//int main()
//{
//	/*Circle a;
//	cin >> a.r >> a.cent;
//	cout << a.r << " " << a.cent << endl;*/
//
//
//	Circle a;
//	cin >> a.r >> a.cent.x >> a.cent.y;
//	Circle b;
//	cin >> b.r >> b.cent.x >> b.cent.y;
//	int lenth = sqrt( (pow((b.cent.x - a.cent.x), 2)) - (pow((b.cent.y - a.cent.y) , 2)) );
//	if (lenth <= b.r + a.r)
//	{
//		cout << "perecekaytca";
//	}
//	else
//	{
//		cout << "ne perecekaytca";
//	}
//}