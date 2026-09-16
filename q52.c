// Q52: Write a program to print the following pattern:

#include <stdio.h>

int main() {
    int i, j, stars[] = {4, 5, 3, 1};

    for (i = 0; i < 4; i++) {
        for (j = 1; j <= stars[i]; j++)
            printf("*");

        printf("\n\n");
    }

    return 0;
}
