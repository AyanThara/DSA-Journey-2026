#include <iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "Pre-increment (++a): " << ++a << endl;  // a becomes 6
    cout << "Post-increment (a++): " << a++ << endl; // prints 6, then becomes 7
    cout << "After post-increment: " << a << endl;
}
