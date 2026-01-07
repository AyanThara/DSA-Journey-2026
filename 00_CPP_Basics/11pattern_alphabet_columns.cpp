#include <iostream>
using namespace std;
// Alphabet column pattern
// Example:
// Input: 4
// Output:
// ABCD
// ABCD
// ABCD
// ABCD
int main() {
    int n;
    cin >> n;
    int row = 1;
    while (row <= n) {
        int col = 1;

        while (col <= n) {
            char ch = 'A' + col - 1;   
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
}
