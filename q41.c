// Q41 (Loops without Arrays/Strings) - Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main()
{
    int n, first, last, temp, divisor = 1, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp >= 10)
    {
        divisor = divisor * 10;
        temp = temp / 10;
    }

    first = temp;
    last = n % 10;

    result = n - first * divisor - last;
    result = result + last * divisor + first;

    printf("Number after swapping = %d", result);

    return 0;
}