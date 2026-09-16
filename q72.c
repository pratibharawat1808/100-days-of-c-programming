// Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j, a[100][100], sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter matrix elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}
