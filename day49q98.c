//Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main() {
    int n,i;
    printf("Enter size of string: ");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter name: ");
    scanf(" %[^\n]",s);
    printf("Name: ");
    for(i=0;i<n;i++) {
        if(i==0) {
            printf("%c",s[i]);}
        else if(s[i]==' ' && i+1<n) {
            if(i+1<n) {
                int j=i+1;
                while(j<n && s[j]!=' ') {
                    j++;}
                if(j==n) {
                    printf(" ");
                    while(i+1<n) {
                        printf("%c",s[i+1]);
                        i++;}}
                else {
                    printf(" %c",s[i+1]);}}}
    }
    return 0;
}