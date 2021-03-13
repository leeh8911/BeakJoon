#include <iostream>

using namespace std;

int main(void)
{
	int X;
	cin >> X;

	int n = 1, count = 1;
	while (true)
	{
		if (n >= X)
		{
			n -= count;
			break;
		}

		count++;
		n += count;
	}

	int rest = X - n;
	int a = rest, b = count - rest + 1;

	if (count % 2 == 0)
	{
		cout << a << "/" << b;
	}
	else
	{
		cout << b << "/" << a;
	}
	return 0;
}