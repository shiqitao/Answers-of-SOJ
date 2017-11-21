#include <iostream>

using namespace std;

int main()
{
    bool arr[2000001];
    int n;

    cin >> n;
    if( n<=1 || n>2000000 ){
        cout << "error!";
    }
    else{
        for (int i=0; i<=n; i++)
            arr[i] = true;

        for (int i=2; i*i<=n; i++)
            if (arr[i])
                for (int k=2;k*i<=n;k++)
                    arr[k*i] = false;

        cout << 2;
        for (int i=3; i<=n; i++)
            if (arr[i]) {
                cout << " " << i;
        }
    }

    return 0;
}
