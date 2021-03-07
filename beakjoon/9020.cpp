#include <iostream>
#include <cstring>
#include <memory>

using namespace std;

bool IsPrime(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

void GetGoldPartition(int partition[2], int n)
{
	int temp_partition[] = { 0, 0 };
	for (int i = 2; i < (n/2 + 1); i++)
	{
		if (IsPrime(i) && IsPrime(n - i))
		{
			temp_partition[0] = i;
			temp_partition[1] = n - i;

			if ((partition[1] - partition[0]) > (temp_partition[1] - temp_partition[0]))
			{
				memmove(partition, temp_partition, sizeof(int)*2);
			}
		}
	}
}

int main(void)
{
	int T, n, partition[2] = { 0, 10000 };
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> n;
		GetGoldPartition(partition, n);
		
		cout << partition[0] << " " << partition[1] << "\n";
		partition[0] = 0;
		partition[1] = 10000;
	}
	return 0;
}