#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	int *time = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}
	if (n == 1) {
		cout << time[0];
		delete[] time;
		return 0;
	}
	if (n == 2) {
		cout << time[1];
		delete[] time;
		return 0;
	}
	int *DP = new int[n];
	memset(DP, 0, sizeof(int)*n);
	DP[0] = time[0];
	DP[1] = time[1];
	for (int i = 2; i < n; i++) {
		DP[i] = min(DP[i - 1] + time[0] + time[i], DP[i - 2] + time[0] + time[i] + 2 * time[1]);
	}
	cout << DP[n - 1];
	delete[] time;
	delete[] DP;
	return 0;
}