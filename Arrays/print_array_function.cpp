#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int one[5] = {1, 2, 3, 4, 5};
    int two[10] = {1, 2};

    printArray(one, 5);
    printArray(two, 10);

    return 0;
}
