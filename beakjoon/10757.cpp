#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string A, B, C = "";
	int n = 0, a, b, c;
	string::iterator ai, bi;
	cin >> A >> B;

	int len = A.size() > B.size() ? A.size() : B.size();
	ai = A.end() - 1;
	bi = B.end() - 1;
	a = *ai - '0';
	b = *bi - '0';

	for (int i = 0; i < len + 1; i++)
	{
		c = a + b + n;
		n = c > 9;
		c = c % 10;
		C.insert(C.begin(), c + '0');

		if ((ai == A.begin()) && (bi == B.begin()))
		{
			break;
		}
		else if (ai == A.begin())
		{
			bi--;

			a = 0;
			b = *bi - '0';
		}
		else if (bi == B.begin())
		{
			ai--;

			a = *ai - '0';
			b = 0;
		}
		else
		{
			ai--;
			bi--;

			a = *ai - '0';
			b = *bi - '0';
		}

	}

	if (n > 0)
		C.insert(C.begin(), n + '0');

	cout << C;

	return 0;
}