#include <iostream>
using namespace std;

// Right-angled star triangle pattern
// Example:
// Input: 4
// Output:
// *
// **
// ***
// ****

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
