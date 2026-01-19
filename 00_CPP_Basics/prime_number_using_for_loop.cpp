#include <iostream>
using namespace std;
// Program to check whether a number is prime using for loop
int main() {
    int n;
    cin >> n;
    bool isPrime = true;
    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i<n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
        cout << "Prime number";
    else
        cout << "Not a prime number";
}
