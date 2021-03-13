#include <iostream>

using namespace std;

long long int DistSqr(long long int A[2], long long int B[2])
{
	return (A[0] - B[0]) * (A[0] - B[0]) + (A[1] - B[1]) * (A[1] - B[1]);
}

int main(void)
{
	long long int ChoiPos[2], BeakPos[2], ChoiDist, BeakDist, N;
	long long int DistSqrBtwPos, DistSumSqr, DistDiffSqr;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> ChoiPos[0] >> ChoiPos[1] >> ChoiDist;
		cin >> BeakPos[0] >> BeakPos[1] >> BeakDist;

		DistSqrBtwPos = DistSqr(ChoiPos, BeakPos);
		DistSumSqr = (ChoiDist + BeakDist) * (ChoiDist + BeakDist);
		DistDiffSqr = (ChoiDist - BeakDist) * (ChoiDist - BeakDist);

		if (DistSqrBtwPos == 0)
		{
			if (ChoiDist == BeakDist)
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else if (DistSqrBtwPos < ChoiDist * ChoiDist || DistSqrBtwPos < BeakDist * BeakDist)
		{
			if (DistSqrBtwPos == DistDiffSqr)
			{
				cout << 1 << "\n";
			}
			else if (DistSqrBtwPos > DistDiffSqr)
			{
				cout << 2 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		else
		{
			if (DistSqrBtwPos == DistSumSqr)
			{
				cout << 1 << "\n";
			}
			else if (DistSqrBtwPos < DistSumSqr)
			{
				cout << 2 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}

	}
	return 0;
}