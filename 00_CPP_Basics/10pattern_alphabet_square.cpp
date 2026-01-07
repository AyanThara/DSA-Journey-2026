#include <iostream>
using namespace std;

// Alphabet square pattern
// Example:
// Input: 4
// Output:
// AAAA
// BBBB
// CCCC
// DDDD

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        char ch = 'A' + row - 1;   // character for the current row

        while (col <= n) {
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
