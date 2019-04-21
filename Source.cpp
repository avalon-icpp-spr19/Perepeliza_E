#include <iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	/// FOR
	////ÇÀÄÀÍÈÅ 1
	//int counter = 0;
	//int N, fir, seco, thi;	
	//cin >> N;
	//int sum;
	//for (int i = 100; i < 1000; ++i)
	//{		
	//	thi = i % 10;
	//	seco = (i / 10) % 10;
	//	fir = i / 100;
	//	sum = thi + seco + fir;
	//	if (sum == N) { counter++; }
	//}
	//cout << counter;

	//ÇÀÄÀÍÈÅ 3
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if ((i + j) % 2 == 0)
//			{
//				cout << "#";
//			}
//			
//			else
//			{
//				cout << ".";
//			}
//		}
//		cout << endl;
//	}
//}

////ÇÀÄÀÍÈÅ 4
//	int n, mid;
//	cin >> n;
//	mid = n / 2;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i <= mid)
//			{
//				if (j >= mid - i && j <= mid + i)
//					cout << "*";
//				else
//					cout << " ";
//			}
//			else
//			{
//				if ((j >= mid + i - n + 1) && (j <= mid - i + n - 1))
//					cout << "*";
//				else
//					cout << " ";
//			}
//		}
//		cout << endl;
//	}
//


	/// WHILE
	////ÇÀÄÀÍÈÅ 1
	//int a = 0, c = 0;
	//int arr[100] = {};
	//cin >> a;
	//while (a != 0)
	//{
	//	arr[c] = a;
	//	cin >> a;
	//	c++;
	//}
	//int max = arr[0];
	//int min = arr[0];
	//for (int j = 0; j < 100; j++)
	//{
	//	for (int i = 1; i < 100; i++)
	//	{
	//		if (arr[i] > max) { max = arr[i]; }
	//		if (arr[i] < min) { min = arr[i]; }
	//	}
	//}
	//cout << "max " << max << "\n";
	//cout << "min " << min << "\n";

	////ÇÀÄÀÍÈÅ 2

	//int a = 0, c = 0, d = 0;
	//int arr[100] = {};
	//cin >> a;
	//while (a != 0)
	//{
	//	arr[c] = a;
	//	cin >> a;
	//	c++;
	//}
	//int max = arr[0];

	//for (int j = 0; j < 100; j++)
	//{
	//	for (int i = 1; i < 100; i++)
	//	{
	//		if (arr[i] > max) { max = arr[i]; }
	//	}
	//}
	//for (int k = 0; k < 100; k++)
	//{
	//	if (arr[k] == max) { d++; }
	//}
	//cout << d << "\n";

///êîä â ïåðâûõ äâóõ çàäàíèÿõ ïîëó÷èëñÿ âåñüìà òîïîðíûì ñ òî÷êè çðåíèÿ îïòèìèçàöèè, íî áåç äèíàìè÷åñêèõ ìàññèâîâ ñëîæíî


//	//ÇÀÄÀÍÈÅ 3
//	string a;
//	cin >> a;
//	for (int i = a.size(); i >= 0; i--)
//	{
//		cout << a[i];
//	}

	////ÇÀÄÀÍÈÅ 4
	//int a,b = 0,c = 0;
	//cin >> a;
	//while (b < a)
	//{
	//	b = pow(2,c);
	//	c++;
	//}
	//cout << b;

//ÇÀÄÀÍÈÅ 6
//int a = 0, c = 0, d=0;
//int arr[100] = {};
//cin >> a;
//while (a != 0)
//{
//	arr[c] = a;
//	cin >> a;
//	c++;
//}
//
//for (int k = 2; k < 100; k++)
//{
//	if ((arr[k] > arr[k - 1]) && (arr[k] > arr[k + 1])) { d++; }
//}
//cout << d;

}
