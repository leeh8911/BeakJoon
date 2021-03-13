#include <iostream>


using namespace std;

int main(void)
{
	int A, B, C, result;
	cin >> A >> B >> C;
	if (C == B)
		result = -1;
	else
	{
		result = A / (C - B) + 1;
		result = result < 0 ? -1 : result;
	}
	cout << result;

	return 0;
}