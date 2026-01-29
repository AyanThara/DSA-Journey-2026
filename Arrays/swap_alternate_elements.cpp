#include <iostream>
using namespace std;
void swapAlternate(int arr[], int size) {
    for(int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}
void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int even[10] = {1,2,3,4,5,6,7,8,9,10};
    int odd[5] = {1,2,3,4,5};
    swapAlternate(even, 10);
    swapAlternate(odd, 5);
    cout << "After swapping even array: ";
    printArray(even, 10);
    cout << "After swapping odd array: ";
    printArray(odd, 5);
}
