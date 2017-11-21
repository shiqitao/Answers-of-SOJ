#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int n; cin >> n;
	string str;
	getchar();
	getline(cin, str);
	if (n == 1) {
		cout << str;
		return 0;
	}
	int len = str.size();
	int m = ceil((double)len / (2 * n - 2)) * (n - 1);
	char *z = new char[n*m];
	memset(z, ' ', sizeof(char)*n*m);
	int i = 0, j = 0;
	bool direction = 0;
	for (int p = 0; p < len; p++) {
		if (direction == 0) {
			if (j < n) z[j++*m + i] = str[p];
			else {
				direction = 1;
				j -= 2; p--;
			}
		}
		else {
			if (j >= 0) z[j--*m + ++i] = str[p];
			else {
				direction = 0;
				j += 2; p--;
			}
		}
	}
	str = "";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (z[i*m + j] != ' ') {
				str += z[i*m + j];
			}
		}
	}
	cout << str;
	delete[] z;
	return 0;
}