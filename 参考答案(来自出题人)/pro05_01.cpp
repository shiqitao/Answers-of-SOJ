#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int mat[10][10];
    // int newmat[10][10];
    cin >> m >> n;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin >> mat[i][j];
        }
    }

    cout << n << " " << m << endl;
    for (int j=0;j<n;j++) {
        for (int i=m-1; i>=0; i--) {
            cout << mat[i][j];
            if (i > 0)
                cout << " ";
        }
        if (j != n-1)
            cout << endl;
    }

    return 0;
}
