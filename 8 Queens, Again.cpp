#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        bool row[9] = {0};
        bool col[9] = {0};
        bool d1[20] = {0}; // row - col + 8
        bool d2[20] = {0}; // row + col
        bool valid = true;

        for (int i = 0; i < 8; i++) {
            string s;
            cin >> s;

            int c = s[0] - 'A' + 1;  // column 1..8
            int r = s[1] - '0';      // row 1..8

            if (row[r] || col[c] || d1[r - c + 8] || d2[r + c]) {
                valid = false;
            }

            row[r] = true;
            col[c] = true;
            d1[r - c + 8] = true;
            d2[r + c] = true;
        }

        if (valid)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }

    return 0;
}