#include <iostream>

using namespace std;

int MinValueInDistArr(int dist[4])
{
	int min_val = 1000;
	for (int i = 0; i < 4; i++)
	{
		if (min_val > dist[i])
		{
			min_val = dist[i];
		}
	}

	return min_val;
}

int main(void)
{
	int x, y, w, h;
	int dist[4] = { 0 };
	cin >> x >> y >> w >> h;

	dist[0] = x;
	dist[1] = w - x;
	dist[2] = y;
	dist[3] = h - y;

	cout << MinValueInDistArr(dist);

	return 0;
}