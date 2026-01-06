#include <iostream>
using namespace std;

// Incremental number triangle pattern
// Example:
// Input: 4
// Output:
// 1
// 23
// 345
// 4567

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        int value = i;   // reset value for each row

        while (j <= i) {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
