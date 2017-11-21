# include <iostream>
# include <cstring>

using namespace std;

int main() {
    int numRows;
    char s[50];

    cin >> numRows;
    cin.get();
    cin >> s;
    if (numRows == 1) {
        cout << s;
        return 0;
    }

    int idx = 0;
    char result[50] = {'\0'};

    int len = strlen(s);
    /* divide the z-output into groups. E.g:
    *  a   | e   | i   | m
    *  b d | f h | j l | n
    *  c   | g   | k   |
    *  grp1  grp2 grp3  grp4*
    *  num_of_grp = (len / (numRows + (numRows-2)) + 1
    *             = (14 / (3 + (3 - 2)))) + 1 = 4
    *  * for program simplicity, the final group (grp4) could be empty
    */
    int groups = (len / (2 * numRows - 2)) + 1;

    // for each row
    for (int i=0; i < numRows; i++) {
        // output char in this row for each group
        for (int j=0; j < groups; j++) {
            if ((2*numRows-2)*j + i < len)
                result[idx++] = s[(2*numRows-2)*j + i];
            // output diagonal char if not the first or the last row
            if (i != 0 && i != numRows-1)
                if ((2*numRows-2)*j + (2*numRows-2-i) < len)
                    result[idx++] = s[(2*numRows-2)*j + (2*numRows-2-i)];
        }
    }
    result[idx] = '\0';
    cout << result;

    return 0;
}
