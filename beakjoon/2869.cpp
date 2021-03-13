#include <iostream>


using namespace std;

int main(void)
{
	int A, B, V, C = 0, count = 0;;
	cin >> A >> B >> V;

	if((V-B) % (A-B) == 0)
		cout << (int)(((double)(V-B))/(A-B));
	else
		cout << (int)(((double)(V - B)) / (A - B)) + 1;

	return 0;
}