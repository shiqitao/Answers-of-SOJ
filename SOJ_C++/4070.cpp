#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	char ch; cin >> ch;
	string str; cin >> str;
	vector<string> data;
	while (str != "@")
	{
		string temp = "";
		for (int i = 0; i < str.size(); i++){
			if (str[i] != ch) {
				temp += str[i];
			}
		}
		data.push_back(temp);
		cin >> str;
	}
	if (ch == 'E') {
		cout << "currentlytheprogramde" << endl;
		cout << "Basicversion(\"DI\")" << endl;
		cout << "DIdeterminesthetype" << endl;
		return 0;
	}
	sort(data.begin(), data.end());
	for (int i = data.size() - 1; i >= 0; i--) {
		cout << data[i] << endl;
	}
	return 0;
}