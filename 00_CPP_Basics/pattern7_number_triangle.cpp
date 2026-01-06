#include <iostream>
using namespace std;

// Number triangle pattern
// Example:
// Input: 4
// Output:
// 1
// 22
// 333
// 4444
int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}
