#include <stdio.h>
void swap(int* a, int* b) { int t = *a; *a = *b; *b = t; }
int partition(int a[], int low, int high) {
    int pivot = a[high], i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (a[j] < pivot) { i++; swap(&a[i], &a[j]); }
    }
    swap(&a[i + 1], &a[high]);
    return (i + 1);
}
void quickSort(int a[], int low, int high) {
    if (low < high) { int pi = partition(a, low, high); quickSort(a, low, pi - 1); quickSort(a, pi + 1, high); }
}