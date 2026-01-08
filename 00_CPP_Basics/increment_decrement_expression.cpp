#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b;
    b = ++a + a++; 
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
