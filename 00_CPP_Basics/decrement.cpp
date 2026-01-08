#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "Pre-decrement (--a): " << --a << endl;  // a becomes 4
    cout << "Post-decrement (a--): " << a-- << endl; // prints 4, then becomes 3
    cout << "After post-decrement: " << a << endl;
}
