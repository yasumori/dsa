#include <cstdlib>
#include <iostream>
using namespace std;

const int n = 7;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[]) {
    int i = 0;
    cout << "current array: ";
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

void selectionSort(int arr[]) {
    int i, j, min, minIndex;
    for (i = 0; i < n; i ++) {
        min = arr[i];
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
        printArray(arr);
    }
}

int main(void) {
    int array[] = {33, 4, 67, -14, 908, 77, 21};
    printArray(array);
    cout << "Start sorting" << endl;
    selectionSort(array);
    cout << "Finish sorting" << endl;
    return EXIT_SUCCESS;
}
