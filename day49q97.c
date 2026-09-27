//program to Print the initials of a name.
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter size of string: ");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter name: ");
    scanf(" %[^\n]",s);
    printf("Initials: ");
    if(s[0]!=' ') {
        printf("%c",s[0]);
    }
    for(i=1;i<n;i++) {
        if(s[i]==' ' && s[i+1]!=' ') {
            printf("%c",s[i+1]); }}
    return 0;
}