#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct student
{
	string name;
	int chinese;
	int math;
	int english;
	int all;
};
bool cmp(student stu1, student stu2);
int main()
{
	int n; cin >> n;
	student *stu = new student[n];
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].chinese >> stu[i].math >> stu[i].english;
		stu[i].all = stu[i].chinese + stu[i].math + stu[i].english;
	}
	int m; cin >> m;
	sort(stu, stu + n, cmp);
	cout << stu[m - 1].name << " " << stu[m - 1].all;
	return 0;
}
bool cmp(student stu1, student stu2)
{
	if (stu1.all != stu2.all) {
		return stu1.all > stu2.all;
	}
	if (stu1.chinese != stu2.chinese) {
		return stu1.chinese > stu2.chinese;
	}
	if (stu1.math != stu2.math) {
		return stu1.math > stu2.math;
	}
	return stu1.name < stu2.name;
}