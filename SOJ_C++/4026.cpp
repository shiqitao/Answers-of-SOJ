#include <iostream>
using namespace std;
#define Offset 29
int main()
{
	char a[5];
	cin >> a;
	if (a[3] > '9' || a[3] < '0')
	{
		cout << "Error!";
	}
	else
	{
		a[0] += Offset; a[1] += Offset; a[2] += Offset; a[3] += Offset;
		cout << a;
	}
	return 0;
}