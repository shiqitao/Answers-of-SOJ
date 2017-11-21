#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int max = 0, index, temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (temp>max) {
			max = temp;
			index = i + 1;
		}
	}
	cout << max << " " << index;
	return 0;
}