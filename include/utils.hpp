#include <iostream>

using namespace std;

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
void swap(T *a, T *b) {
    T tmp = *a;
    *a = *b;
    *b = tmp;
}
