#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	reverse(str.begin(), str.end());
	int i = 0;
	while (str[i] == '9' && i <= str.size()) str[i++] = '0';
	if (i == str.size()) str += '1';
	else str[i] += 1;
	reverse(str.begin(), str.end());
	cout << str;
	return 0;
}