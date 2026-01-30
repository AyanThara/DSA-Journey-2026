#include <iostream>
using namespace std;

void reversearray(int array[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
void printarray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}

int main(){
    int array[10] = {2,1,3,4,5,6,7,8,9,10};
    int barray[5] = {1,2,3,4,5};
    reversearray(array,10);
    printarray(array,10);
    cout << endl;
    reversearray(barray,5);
    printarray(barray,5);
    cout << endl;
}
