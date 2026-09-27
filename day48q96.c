// program to Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main() {
    int n,i,start=0;
    printf("Enter size of string: ");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter sentence: ");
    scanf(" %[^\n]",s);
    for(i=0;i<=n;i++) {
        if(s[i]==' ' || s[i]=='\0') {
            int j;
            for(j=i-1;j>=start;j--) {
                printf("%c",s[j]);}
            if(s[i]==' ') {
                printf(" ");}
            start=i+1;}}
    return 0;
}