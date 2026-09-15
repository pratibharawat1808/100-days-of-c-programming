//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    int t, h, m, s;

    printf("Enter time in seconds: ");
    scanf("%d", &t);

    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;

    printf("Time = %d:%d:%d\n", h, m, s);

    return 0;
}
