#include <iostream>
using namespace std;
int main()
{
	int n, m; cin >> n >> m;
	int *data = new int[n*m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> data[i*m + j];
		}
	}
	cout << m << " " << n << endl;
	cout << data[(n - 1)*m];
	for (int j = n - 2; j >= 0; j--) {
		cout << " " << data[j*m];
	}
	for (int i = 1; i < m; i++) {
		cout << endl << data[(n - 1)*m + i];
		for (int j = n - 2; j >= 0; j--) {
			cout << " " << data[j*m + i];
		}
	}
	delete[] data;
	return 0;
}