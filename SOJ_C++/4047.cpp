#include <iostream>
#include <cstring>
using namespace std;
int main() {
	int n; cin >> n;
	bool *data = new bool[n + 1];
	memset(data, true, sizeof(bool)*(n + 1));
	if (n > 2) {
		cout << 2;
	}
	for (int i = 3; i < n + 1; i += 2) {
		if (data[i]) {
			cout << " " << i;
			for (int j = 3 * i; j < n + 1; j += 2 * i) {
				data[j] = false;
			}
		}
	}
	return 0;
}