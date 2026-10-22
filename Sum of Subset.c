#include <stdio.h>
void subsetSum(int s[], int t[], int s_size, int t_size, int sum, int target, int it) {
    if (target == sum) {
        for (int i = 0; i < t_size; i++) printf("%d ", t[i]);
        printf("\n");
        return;
    }
    for (int i = it; i < s_size; i++) {
        if (sum + s[i] <= target) {
            t[t_size] = s[i];
            subsetSum(s, t, s_size, t_size + 1, sum + s[i], target, i + 1);
        }
    }
}