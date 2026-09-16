// Q67: Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n, i, a[101], value, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &pos);

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
