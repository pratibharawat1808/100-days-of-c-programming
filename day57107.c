// Previous Greater Element
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Previous greater elements: ");
    for (i = 0; i < n; i++) {
        int ans = -1;
        for (j = i - 1; j >= 0; j--) {
            if (a[j] > a[i]) {
                ans = a[j];
                break;
            }
        }
        if (i > 0) printf(",");
        printf("%d", ans);
    }
    printf("\n");
    return 0;
}