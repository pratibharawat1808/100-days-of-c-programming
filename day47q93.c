//Check if two strings are anagrams of each other.
#include <stdio.h>
int main() {
    int n1,n2,i,j,found;
    printf("Enter size of first string: ");
    scanf("%d",&n1);
    char s1[n1+1]
    printf("Enter first string: ");
    scanf("%s",s1);
    printf("Enter size of second string: ");
    scanf("%d",&n2);
    char s2[n2+1];
    printf("Enter second string: ");
    scanf("%s",s2);
    if(n1!=n2) {
        printf("Not Anagrams");
        return 0;}
    for(i=0;i<n1;i++) {
        found=0;
        for(j=0;j<n2;j++) {
            if(s1[i]==s2[j]) {
                found=1;
                s2[j]='0';
                break;}}
        if(found==0) {
            printf("Not Anagrams");
            return 0;}}
    printf("Anagrams");
    return 0;
}