#include <stdio.h>
void getMaxMin(int a[], int i, int j, int *max, int *min) {
    if (i == j) { *max = a[i]; *min = a[i]; return; }
    if (i == j - 1) {
        if (a[i] > a[j]) { *max = a[i]; *min = a[j]; }
        else { *max = a[j]; *min = a[i]; }
        return;
    }
    int mid = (i + j) / 2, max1, min1;
    getMaxMin(a, i, mid, max, min);
    getMaxMin(a, mid + 1, j, &max1, &min1);
    if (max1 > *max) *max = max1;
    if (min1 < *min) *min = min1;
}