#include "utils.h"

#include <iostream>

using namespace std;

template <typename T>
int partition(T arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i + 1;
}

template <typename T>
void quickSort(T arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int i_array[] = {10, 80, 30, 90, 40, 50, 70};
    int arr_size = size(i_array);
    int high = arr_size - 1;
    int low = 0;

    printArray(i_array, arr_size);
    cout << "Quick sort start" << endl;
    quickSort(i_array, low, high);
    cout << "Finish sorting" << endl;
    printArray(i_array, arr_size);

    return 0;
}
