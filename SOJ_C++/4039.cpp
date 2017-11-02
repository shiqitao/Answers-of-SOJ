#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int prime = 2, last = 0;
	while (n != 1) {
		while (n%prime == 0) {
			if (last != 0) {
				cout << last << " ";
				last = prime;
			}
			else {
				last = prime;
			}
			n /= prime;
		}
		prime++;
	}
	cout << last;
	return 0;
}