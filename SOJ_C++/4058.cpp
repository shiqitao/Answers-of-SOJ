#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n; cin >> n;
	string str = "";
	char ch; ch = getchar();
	while (ch != '\n')
	{
		if (ch >= 'a' && ch <= 'z') {
			str += ch - 'a' + 'A';
		}
		else if (ch >= 'A' && ch <= 'Z') {
			str += ch - 'A' + 'a';
		}
		else if (ch >= '0' && ch <= '9') {
			str += ch;
		}
		ch = getchar();
	}
	sort(str.begin(), str.end());
	reverse(str.begin(), str.end());
	string result = ""; result += str[0];
	int j = 0;
	for (int i = 1; i < str.size(); i++) {
		if (str[i] != result[j]) {
			result += str[i];
			j++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << result;
	}
	return 0;
}