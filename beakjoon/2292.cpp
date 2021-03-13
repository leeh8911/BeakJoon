#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int N, n = 1, count = 1;
	cin >> N;

	while (true)
	{
		if (n >= N)
		{
			break;
		}

		n += 6 * count;
		count++;
	}

	double cal = ceil((3 + sqrt(12 * N - 3)) / 6);

	cout << count << "\n";
	cout << (int)cal;

	return 0;
}