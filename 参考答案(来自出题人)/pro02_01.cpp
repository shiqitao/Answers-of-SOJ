#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if( b>0 )
    {
    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "/" << b << "=" << a/b << endl;
    cout << a << "%" << b << "=" << a%b << endl;
    }
    else if( b<0 )
    {
    cout << a << "+(" << b << ")=" << a+b << endl;
    cout << a << "*(" << b << ")=" << a*b << endl;
    cout << a << "/(" << b << ")=" << a/b << endl;
    cout << a << "%(" << b << ")=" << a%b << endl;
    }
    else
    {
    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "/" << b << ":Error!" << endl;
    cout << a << "%" << b << ":Error!" << endl;
    }
    return 0;
}
