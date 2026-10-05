#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x, y, z, z_a, z_b, z_c, z_d, z_e, z_f, z_g, z_h;
	double pi = 3.1415;
	cout << "Please enter a numeric value=";
	cin >> x;
	cout << "Please enter another numerical value=";
	cin >> y;

	z_a = sqrt(pow(x, 2)) - sqrt(pow(x, 2) + pow(y, 2));
	cout << "Result of equation a: " << z_a << endl;

	z_b = y * (x * y + pow(x, 2)) + 4 * exp(x * y);
	cout << "Result of equation b: " << z_b << endl;

	z_c = cos(pow(x, 2)) + sin(pow(y, 2)) + abs(x);
	cout << "Result of equation c: " << z_c << endl; 

	z_d = pow(x, y) + log(x) + sqrt(pow(x, 3));
	cout << "Result of equation d: " << z_d << endl;

	z_e = exp(x) + exp(y) + log(x) + pow(y, 3.00 / 5.00);
	cout << "Result of equation e: " << z_e << endl;

	z_f = sqrt(abs(pow(x, 5 * y + 2)) + y) + log10((6 * y) - (3 * x));
	cout << "Result of equation f: " << z_f << endl;
	
	z_g = pow(x, 2) + exp(abs(x - y)) - y * (3 - y * pow(x, 2));
	cout << "Result of equation g: " << z_g << endl;

	z_h = cos(pi * x) - y * sin(pi) - exp(5 * x - abs(y));
	cout << "Result of equation h: " << z_h << endl;


	return 0;
}