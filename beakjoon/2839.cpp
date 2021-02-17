#include <iostream>

using namespace std;

int main(void)
{
	int N, r, q5, q3;
	int kg3 = 3, kg5 = 5;

	cin >> N;

	q5 = N / kg5;
	r = N % kg5;
	while (q5 >= 0)
	{
		q3 = r / kg3;
		if (r % kg3 == 0)
		{
			break;
		}
		q5--;
		r += 5;
	}

	if (q5 < 0)
		cout << -1;
	else
		cout << q5 + q3;
	
	return 0;
}