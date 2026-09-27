// C program to find first repeating alphabet in a string
#include <stdio.h>
int main() {
    int n,i,j;
    printf("Enter size of string: ");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter string: ");
    scanf(" %[^\n]",s);
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(s[i]==s[j]) {
                printf("First repeating alphabet: %c",s[i]);
                return 0;}}}
    printf("No repeating alphabet");
    return 0;
}