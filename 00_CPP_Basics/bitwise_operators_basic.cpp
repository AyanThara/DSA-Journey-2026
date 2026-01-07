#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "NOT of first number: " << (~a) << endl;
    cout << "NOT of second number: " << (~b) << endl;
}
