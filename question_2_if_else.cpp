#include <iostream>
using namespace std;
int main()
{
	double x, fx;
	cout << "Please enter a x value:";
	cin >> x;

	if (x <= 10)
	{
		fx = sqrt(pow(x, 2) - 2 * x) / exp(x + 1);
		cout << " x =" << x << "icin f(" << x << ") =" << fx << endl;
	}
	else
	{
		fx = pow(pow(x, 2) - 2 * x, 1.00 / 5.00);
		cout << " x =" << x << "icin f(" << x << ") =" << fx << endl;
	}

	return 0;
}
