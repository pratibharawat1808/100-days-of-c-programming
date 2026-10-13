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
    printf("First negative in each window: ");
    for (i = 0; i <= n - k; i++) {
        int ans = 0;
        for (j = i; j < i + k; j++) {
            if (a[j] < 0) {
                ans = a[j];
                break;
            }
        }
        printf("%d ", ans);
    }
    printf("\n");
    return 0;
}