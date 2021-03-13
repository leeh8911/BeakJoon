#include <iostream>
#include <cstring>
#include <memory>
using namespace std;

#define CALCULATE_ROOM(F, U, H, W, N) \
do{\
F = (N-1) % (H) + 1;\
U = (N-1) / H + 1;\
}while(0);

int main(void)
{
	int T, H, W, N;
	int F, U;
	char buf[10];
	
	cin >> T;
	for (int t = 0; t < T; t++)
	{
		cin >> H >> W >> N;

		CALCULATE_ROOM(F, U, H, W, N);

		sprintf(buf, "%d%2.2d", F, U);
		cout << buf << "\n";
		memset(buf, 0, sizeof(buf));
	}

	return 0;
}