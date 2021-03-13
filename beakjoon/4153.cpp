#include <iostream>

using namespace std;

void PrintIsRightTriangle(int A, int B, int C)
{
	if (A * A == (B * B) + (C * C))
	{
		cout << "right\n";
	}
	else
	{
		cout << "wrong\n";
	}
}

int main(void)
{
	int A, B, C;
	int long_side, others[2] = { 0 };
	while (true)
	{
		cin >> A >> B >> C;

 		if (A == 0 && B == 0 && C == 0)
		{
			break;
		}

		if (A > B && A > C)
		{
			PrintIsRightTriangle(A, B, C);
		}
		else if (B > A && B > C)
		{
			PrintIsRightTriangle(B, A, C);
		}
		else
		{
			PrintIsRightTriangle(C, B, A);
		}
	}


	return 0;
}