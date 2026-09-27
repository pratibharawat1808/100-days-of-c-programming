// C program to remove vowels from a string
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter size of string: ");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter string: ");
    scanf(" %[^\n]",s);
    for(i=0;i<n;i++) {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' &&
           s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U') {
            printf("%c",s[i]);}
    }
    return 0;
}