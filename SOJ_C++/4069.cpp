#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str; cin >> str;
	char ch; cin >> ch;
	bool a = true;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == ch) {
			cout << i << " ";
			a = false;
		}
	}
	if (a) {
		cout << "NULL";
	}
	return 0;
}