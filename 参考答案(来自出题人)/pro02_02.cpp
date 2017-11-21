#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned int a,tmp;
    unsigned int m[4];
    unsigned char n[4];
    int i;

    cin >> a;
    if( a>=1000 & a<=9999 )
    {
        tmp = a;
        for(i=3; i>=0; i--)
        {
            m[i] = tmp/pow(10, i);
            tmp -= m[i]*pow(10, i);
            n[i] = m[i]+48+16+13;
            cout << n[i];
        }
        cout << endl;
    }
    else
        cout << "Error!" << endl;
    return 0;
}