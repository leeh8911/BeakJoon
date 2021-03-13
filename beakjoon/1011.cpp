#include <iostream>
#include <math.h>

using namespace std;
typedef long long INT64;

INT64 CalculateWarp(INT64 x, INT64 y)
{
	INT64 dist = y - x;
	INT64 res = 0;
	INT64 k, a;
	
	if (dist <= 3)
		return dist;

	k = (INT64)sqrt(dist);
	a = dist - k * k;

	if (a >= k)
	{
		INT64 sqrv = (INT64)(sqrt(1 + 4 * dist));
		a = 1 + 4 * dist - sqrv * sqrv;
		k = (-1 + sqrv) / 2;
		if (a == 0)
		{
			// 1, 2, 3, ..., k-1, k, k, k-1, ..., a+1, a, a-1, 3, 2, 1
			res = 2 * k;
		}
		else
		{
			// 1, 2, 3, ..., k-1, k, k, k-1, ..., a+1, a, a, a-1, ..., 3, 2, 1
			res = 2 * k + 1;
		}

	}
	else
	{
		if (a == 0)
		{
			// 1, 2, 3, ..., k-1, k, k-1, ..., a+1, a, a-1, 3, 2, 1
			res = 2 * k - 1;
		}
		else
		{
			// 1, 2, 3, ..., k-1, k, k-1, ..., a+1, a, a, a-1, ..., 3, 2, 1
			res = 2 * k;
		}
	}
	return res;
}

int main(void)
{
	INT64 T, x, y;
	cin >> T;

	for (INT64 t = 0; t < T; t++)
	{
		cin >> x >> y;
		cout << CalculateWarp(x, y) << "\n";
	}

	return 0;
}