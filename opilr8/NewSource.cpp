#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int x, a, b, c, g;
	double f;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << "Enter g: ";
	cin >> g;

	if (x > 0)
	{
		f = a * pow(x, 2) + b - pow(g,1./2);
		cout << f;
	}
	else 
		 cout << "Error";
}
