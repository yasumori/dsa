# practice and learn data structures and algorithms in C++

This is my brain exercise.

---

## sorting

- bubble sort: Runs in O(N^2) time in the worst case. O(N) when array is already sorted.

- selection sort: runs in O(n^2) time in the best/worst case. There are two loops inside the algorithm.

- insertion sort: runs in O(n^2) time in the worst case, but in a linear order when elements are sorted from the beginning.

- quick sort: runs in O(N^2) when pivot is always the smallest or largest value, but in practice, it runs in O(nlogn) time. This algorithm can be run in-place and good when the data size is small, but when the data size is large and an extra storage space is available, Merge Sort can be better.

- merge sort: runs in O(nlogn) time. It requires O(n) space for the algorithm to run and it runs the whole process when an input array is already sorted.
---

## Some notes for my learning

### why do templates need to be in the header file?
because templates are instantiation-style polymorphism.
https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file
