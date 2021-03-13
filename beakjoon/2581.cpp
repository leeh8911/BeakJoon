#include <iostream>
#include <string>

using namespace std;

bool IsPrime(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; i < n; i++)
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
	long long N, M, count = 0, min_val = -1, sum_val = 0;
	cin >> M >> N;

	for (int i = M; i <= N; i++)
	{
		if (IsPrime(i))
		{
			count++;
			sum_val += i;
			if (min_val < 0)
			{
				min_val = i;
			}
		}
	}
	if (count == 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum_val << "\n" << min_val;
	}


}