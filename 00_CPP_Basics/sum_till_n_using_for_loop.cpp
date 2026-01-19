#include <iostream>
using namespace std;
// Program to find sum of numbers from 1 to N using for loop
int main() {
    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum = " << sum;
}
