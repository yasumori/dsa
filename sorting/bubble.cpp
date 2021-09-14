#include "utils.h"

#include <iostream>

using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    int is_done = 0;
    while (is_done == 0) {
        int i;
        is_done = 1;
        for (i = 0; i < n-1; i++) {
            if (arr[i] > arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
                // when values are swapped, sorting hasn't finished
                is_done = 0;
            }
        }
        printArray(arr, n);
    }
}

int main() {
    const int n = 7;
    int i_array[] = {5, 2, 3, 6, 1, 4, 7};

    printArray(i_array, n);
    cout << "Bubble sort start" << endl;
    bubbleSort(i_array, n);
    cout << "Finish sorting" << endl;

    return 0;
}
