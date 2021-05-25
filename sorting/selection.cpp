#include <iostream>

using namespace std;

template <typename T>
void swap(T *a, T *b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

template <typename T>
void printArray(T arr[], int n) {
    int i = 0;
    cout << "current array: ";
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

template <typename T>
void selectionSort(T arr[], int n) {
    int i, j, min, min_idx;
    for (i = 0; i < n; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[i], &arr[min_idx]);
        printArray(arr, n);
    }
}

int main(void) {
    const int n = 5;
    int i_array[] = {33, 1, 10, 5, 2};

    printArray(i_array, n);
    cout << "Int Array Start sorting" << endl;
    selectionSort(i_array, n);
    cout << "Finish sorting" << endl;

    float f_array[] = {0.9, 0.8, 0.5, 0.3, -0.1};
    printArray(f_array, n);
    cout << "\nFloat Array Start sorting" << endl;
    selectionSort(f_array, n);
    cout << "Finish sorting" << endl;

    return 0;
}
