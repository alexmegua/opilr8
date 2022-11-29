#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int x, a, b, c, e;
	double f;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << "Enter e: ";
	cin >> e;

	if (x < 0 && b != 0)
	{
		f = a * pow(x, 2) + b - pow(e,2);
		cout << f;
	}
	else 
		 cout << "Error";
}
