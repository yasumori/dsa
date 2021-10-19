#include "utils.h"

#include <iostream>

using namespace std;

template <typename T>
int fillArray(T arr[], T sub_arr[], int sub_arr_size,
        int sub_idx, int merged_idx) {
    while (sub_idx < sub_arr_size) {
        arr[merged_idx] = sub_arr[sub_idx];
        sub_idx++;
        merged_idx++;
    }
    return merged_idx;
}

template <typename T>
void merge(T arr[], int left, int middle, int right) {
    auto const left_sub_arr_size = middle - left + 1;
    auto const right_sub_arr_size = right - middle;

    auto *left_sub_arr = new int[left_sub_arr_size],
         *right_sub_arr = new int[right_sub_arr_size];

    for (auto i = 0; i < left_sub_arr_size; i++) {
        left_sub_arr[i] = arr[left+i];
    }
    for (auto j = 0; j < right_sub_arr_size; j++) {
        right_sub_arr[j] = arr[middle+1+j];
    }
    auto left_sub_arr_idx = 0, right_sub_arr_idx = 0;
    int merged_arr_idx = left;

    while (left_sub_arr_idx < left_sub_arr_size &&
            right_sub_arr_idx < right_sub_arr_size) {
        if (left_sub_arr[left_sub_arr_idx] <= right_sub_arr[right_sub_arr_idx]) {
            arr[merged_arr_idx] = left_sub_arr[left_sub_arr_idx];
            left_sub_arr_idx++;
        } else {
            arr[merged_arr_idx] = right_sub_arr[right_sub_arr_idx];
            right_sub_arr_idx++;
        }
        merged_arr_idx++;
    }
    merged_arr_idx = fillArray(arr, left_sub_arr, left_sub_arr_size,
            left_sub_arr_idx, merged_arr_idx);
    merged_arr_idx = fillArray(arr, right_sub_arr, right_sub_arr_size,
            right_sub_arr_idx, merged_arr_idx);
}

template <typename T>
void mergeSort(T arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    // this will avoid overflow for large numbers
    auto middle = left + (right - left) / 2;
    mergeSort(arr, left, middle);
    mergeSort(arr, middle+1, right);

    merge(arr, left, middle, right);
    printArray(arr, right+1);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    auto arr_size = size(arr);
    auto left = 0;
    auto right = arr_size - 1;

    cout << "Merge sort start" << endl;
    printArray(arr, arr_size);

    mergeSort(arr, left, right);

    cout << "Finish sorting" << endl;
    printArray(arr, arr_size);
    return 0;
}
