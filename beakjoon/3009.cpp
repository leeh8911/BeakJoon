#include <iostream>

using namespace std;

int ArrMax(int* arr, int num)
{
	int max_val = 0;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] > max_val)
		{
			max_val = arr[i];
		}
	}
	return max_val;
}
int ArrMin(int* arr, int num)
{
	int min_val = 1000;
	for (int i = 0; i < num; i++)
	{
		if (arr[i] < min_val)
		{
			min_val = arr[i];
		}
	}
	return min_val;
}

int main(void)
{
	int X[3] = { 0 }, Y[3] = { 0 };
	int arr[4] = { 0 };

	int xmin, xmax, ymin, ymax;

	for (int i = 0; i < 3; i++)
	{
		cin >> X[i] >> Y[i];
	}

	xmin = ArrMin(X, 3);
	ymin = ArrMin(Y, 3);
	xmax = ArrMax(X, 3);
	ymax = ArrMax(Y, 3);

	for (int i = 0; i < 3; i++)
	{
		if (X[i] == xmin && Y[i] == ymin)
		{
			arr[0] = 1;
		}
		else if (X[i] == xmin && Y[i] == ymax)
		{
			arr[1] = 1;
		}
		else if (X[i] == xmax && Y[i] == ymin)
		{
			arr[2] = 1;
		}
		else if (X[i] == xmax && Y[i] == ymax)
		{
			arr[3] = 1;
		}
	}

	if (arr[0] == 0)
	{
		cout << xmin << " " << ymin;
	}
	else if (arr[1] == 0)
	{
		cout << xmin << " " << ymax;
	}
	else if (arr[2] == 0)
	{
		cout << xmax << " " << ymin;
	}
	else if (arr[3] == 0)
	{
		cout << xmax << " " << ymax;
	}



	return 0;
}