#include <iostream>

using namespace std;

const double M_PI = 3.141592653589793238462643383279502884197169399375105820974944;

int main(void)
{
	double R;
	cin >> R;

	cout << fixed;
	cout.precision(6);

	cout << ((R * R) * M_PI) << "\n";
	cout << (4 * (R * R) / 2);

	return 0;
}