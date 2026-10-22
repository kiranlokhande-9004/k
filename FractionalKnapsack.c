#include <stdio.h>
struct Item { int weight, value; };
void fractionalKnapsack(int W, struct Item arr[], int n) {
    double totalValue = 0.0;
    for (int i = 0; i < n; i++) {
        if (arr[i].weight <= W) { W -= arr[i].weight; totalValue += arr[i].value; }
        else { totalValue += arr[i].value * ((double)W / arr[i].weight); break; }
    }
    printf("Max Value: %.2f\n", totalValue);
}