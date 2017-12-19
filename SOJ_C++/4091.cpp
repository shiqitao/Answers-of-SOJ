#include <iostream>
using namespace std;

class Time
{
public:
	int hour;
	int minute;
	int second;
	Time(int _hour = 0, int _minute = 0, int _second = 0);
	Time& operator+=(const Time &obj);
	Time& operator-=(const Time &obj);
	Time& operator++();
	Time operator++(int x);
	Time& operator--();
	Time operator--(int x);
};

Time::Time(int _hour, int _minute, int _second)
{
	hour = _hour;
	minute = _minute;
	second = _second;
}
ostream& operator<<(ostream &os, const Time &obj)
{
	if (obj.hour < 10)
		os << 0;
	os << obj.hour << ":";
	if (obj.minute < 10)
		os << 0;
	os << obj.minute << ":";
	if (obj.second < 10)
		os << 0;
	os << obj.second << endl;
	return os;
}
istream& operator>>(istream &in, Time &obj)
{
	in >> obj.hour >> obj.minute >> obj.second;
	return in;
}
Time& Time::operator+=(const Time &obj)
{
	hour = (hour + obj.hour + (minute + obj.minute + (second + obj.second) / 60) / 60) % 24;
	minute = (minute + obj.minute + (second + obj.second) / 60) % 60;
	second = (second + obj.second) % 60;
	return *this;
}
Time& Time::operator-=(const Time &obj)
{
	hour = (hour - obj.hour + (minute - obj.minute + (second - obj.second + 60) / 60 + 59) / 60 + 23) % 24;
	minute = (minute - obj.minute + (second - obj.second + 60) / 60 + 59) % 60;
	second = (second - obj.second + 60) % 60;
	return *this;
}
Time& Time::operator++()
{
	Time temp(0, 0, 1);
	*this += temp;
	return *this;
}
Time Time::operator++(int x)
{
	Time temp(0, 0, 1);
	Time result = *this;
	*this += temp;
	return result;
}
Time& Time::operator--()
{
	Time temp(0, 0, 1);
	*this -= temp;
	return *this;
}
Time Time::operator--(int x)
{
	Time temp(0, 0, 1);
	Time result = *this;
	*this -= temp;
	return result;
}

int main()
{
	Time time1, time2;
	cin >> time1 >> time2;
	cout << (time1 += (time2++));
	cout << (time1 -= time2);
	cout << ++time2;
	cout << (time2 += (time1--));
	cout << --time1;
	cout << (time2 -= time1);
	return 0;
}