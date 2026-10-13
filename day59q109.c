#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the window size k: ");
    scanf("%d", &k);
    int sum = 0;
    for (i = 0; i < k; i++)
        sum += a[i];
    int max = sum;
    for (i = k; i < n; i++) {
        sum += a[i] - a[i - k];
        if (sum > max) max = sum;
    }
    printf("Maximum sum of a subarray of size %d: %d\n", k, max);
    return 0;
}