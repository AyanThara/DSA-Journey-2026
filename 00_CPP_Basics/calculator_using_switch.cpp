#include<iostream>
using namespace std;
int main() {  int a, b;
    char ch;
    cout << "Enter the first number" << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    cout << "Enter the operation (+, -, *)" << endl;
    cin >> ch;
    switch(ch) {
        case '+':
            cout << "Result = " << a + b << endl;
            break;
        case '-':
            cout << "Result = " << a - b << endl;
            break;
        case '*':
            cout << "Result = " << a * b << endl;
            break;
        default:
            cout << "Wrong input" << endl;
    }
}
