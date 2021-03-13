#include <iostream>
#include <cstring>

using namespace std;

bool IsPrime(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; (i*i) <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

int main(void)
{
	int n = 1, count = 0;

	while (n != 0)
	{
		cin >> n;
		if (n == 0)
			break;
		count = 0;

		for (int i = (n + 1); i <= (2 * n); i++)
		{
			if (IsPrime(i))
			{
				count++;
			}
		}

		cout << count << "\n";
	}

	return 0;
}