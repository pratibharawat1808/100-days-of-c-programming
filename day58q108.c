#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n], ans[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int prefix = 1;
    for (i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= a[i];}
    int suffix = 1;
    for (i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= a[i];}
    printf("Product of array except self: ");
    for (i = 0; i < n; i++)
        printf("%d ", ans[i]);
    printf("\n");
    return 0;
}