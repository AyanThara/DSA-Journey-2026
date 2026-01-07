#include <iostream>
using namespace std;
// Continuous alphabet square pattern
// Example:
// Input: 3
// Output:
// ABC
// DEF
// GHI
int main() {
    int n;
    cin >> n;
    int row = 1;
    char count = 'A';   s
    while (row <= n) {
        int col = 1;
        while (col <= n) {
            cout << count;
            count++;   
            col++;
        }
        cout << endl;
        row++;
    }
}
