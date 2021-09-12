#include "utils.h"

#include <iostream>

using namespace std;

template <typename T>
void insertionSort(T arr[], int n) {
    int i, j, tmp;
    for (i = 1; i < n; i++) {
        tmp = i;
        j = i - 1;
        while (j >= 0 && arr[tmp] < arr[j]) {
            swap(&arr[tmp], &arr[j]);
            tmp--;
            j--;
        }
        printArray(arr, n);
    }
}

int main() {
    const int n = 7;
    int i_array[] = {2, 3, 1, 6, 9, 4, 5};

    printArray(i_array, n);
    cout << "Insertion sort start" << endl;
    insertionSort(i_array, n);
    cout << "Finish sorting" << endl;

    return 0;
}
