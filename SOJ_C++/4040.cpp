#include <iostream>
using namespace std;
int arm(int n);
int main()
{
	int a, b; cin >> a >> b;
	if (a <= 0 || a > b) {
		cout << "error";
		return 0;
	}
	int last = 0;
	for (int i = a; i <= b; i++) {
		if (i == arm(i)) {
			if (last != 0) {
				cout << last << endl;
				last = i;
			}
			else {
				last = i;
			}
		}
	}
	if (last != 0) cout << last;
	else cout << "no";
	return 0;
}
int arm(int n)
{
	int sum = 0, temp;
	while (n != 0) {
		temp = n % 10;
		sum += temp*temp*temp;
		n /= 10;
	}
	return sum;
}