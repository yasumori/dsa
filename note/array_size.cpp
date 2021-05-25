#include <iostream>
using namespace std;
// how to calculate the length of an array on C++

void from_sizeof() {
    int arr[5] = {1, 2, 3, 4, 5};
    int first = sizeof(arr);
    int second = sizeof(arr[0]);
    cout << "first: " << first;
    cout << "\nsecond: " << second;
    cout << "\nsize: " << first/second << "\n";
}

void from_address() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *first = *(&arr + 1);
    int *second = arr;
    int size = first - second;
    cout << "first: " << first;
    cout << "\nsecond: " << second;
    cout << "\nsize: " << size << "\n";
}

int main() {
    from_sizeof();
    from_address();
    return 0;
}
