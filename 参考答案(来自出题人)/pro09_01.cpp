# include <iostream>
# include <cstring>

using namespace std;

# define INT_TO_CHAR(n) ('0' + n)
# define CHAR_TO_INT(c) (c - '0')

int main() {
    char digits[50];
    char tmp[51];
    cin >> digits;

    int len = strlen(digits);
    int tidx = 0;
    // reverse
    for (int i=len-1; i>=0; i--)
        tmp[tidx++] = digits[i];
    tmp[tidx] = '\0';

    int carry = 0;
    for (int i=0;i<tidx;i++) {
        int val = CHAR_TO_INT(tmp[i]);
        if (i == 0)
            val += 1;
        val += carry;
        // carry 1 if larger than 10
        if (val >= 10) {
            val -= 10;
            carry = 1;
        }
        else carry = 0;
        tmp[i] = INT_TO_CHAR(val);
    }

    if (carry != 0)
        tmp[tidx++] = '1';
    tmp[tidx] = '\0';

    for (int i=tidx-1; i>=0; i--)
        cout << tmp[i];

    return 0;
}
