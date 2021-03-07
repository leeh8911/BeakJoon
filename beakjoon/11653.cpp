#include <iostream>

using namespace std;

void Div(int n)
{
	if (n == 1)
		return;

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << "\n";
			Div(n / i);
			break;
		}
	}

	return;
}

int main(void)
{
	int N;
	cin >> N;

	Div(N);

	return 0;

}