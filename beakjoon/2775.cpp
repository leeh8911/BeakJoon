#include <iostream>
#include <memory>
#include <cstring>

using namespace std;

int arr_default[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
int arr[14];
int main(void)
{
	int T, k, n;
	cin >> T;

	for (int t = 0; t < T; t++)
	{
		cin >> k;
		cin >> n;

		memmove(arr, arr_default, sizeof(arr));

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j < n; j++)
			{
				arr[j] = arr[j - 1] + arr[j];
			}
		}

		cout << arr[n-1] << "\n"; 
	}
	return 0;
}