#include <iostream>

using namespace std;

int main()
{
	double a=0, b=0, c=0;
	double temp;

	cin >> a >> b >> c;
	if( a<b )
	{
		temp = a;
		a = b;
		b = temp;
	}
	if( a<c )
	{
		temp = a;
		a = c;
		c = temp;
	}

	if( b<=0 || c<=0 || a>=b+c )
		cout<<-1;
	else if( a*a==b*b+c*c )
		cout<<1;
	else
		cout<<0;

	return 0;
}