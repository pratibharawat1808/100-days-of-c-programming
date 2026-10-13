// First negative integer in every window of size k
#include <stdio.h>
int main() {
    int n, k, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the window size k: ");
    scanf("%d", &k);
    printf("Maximum of each window: ");
    for (i = 0; i <= n - k; i++) {
        int max = a[i];
        for (j = i + 1; j < i + k; j++) {
            if (a[j] > max) max = a[j];
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}