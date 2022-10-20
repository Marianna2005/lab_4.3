#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, F, c, a, b;
	cout << "xp = "; cin >> xp;cout << endl;
	cout << "xk = "; cin >> xk;cout << endl;
	cout << "dx = "; cin >> dx;cout << endl;
	cout << "a = "; cin >> a;cout << endl;
	cout << "c = "; cin >> c;cout << endl;
	cout << "b = "; cin >> b;cout << endl;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(6) << "x" << setw(6) << " |"
		<< setw(6) << "F" << setw(7) << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (c < 0 && b!= 0)
			F = a*x*x+b*b*x;
		else
			if (c > 0 && b == 0)
				F = (x+a)/(x+c);
			else
				F = x / c;

		cout << "|" << setw(10) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << F
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	system("pause");
	return 0;
}

