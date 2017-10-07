#include <iostream>
using namespace std;
#define Offset 29
int main()
{
	char a[5];
	cin >> a;
	if (a[4] != '\0') {
		cout << "Error!";
		return 0;
	}
	for (int i = 0; i < 4; i++)
		a[i] += Offset;
	cout << a;
	return 0;
}