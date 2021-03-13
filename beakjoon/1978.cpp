#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool IsPrime(int n)
{
	if (n == 1)
	{
		return false;
	}
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
	int N, t, count = 0;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		if (IsPrime(t))
			count++;

	}

	cout << count;
}