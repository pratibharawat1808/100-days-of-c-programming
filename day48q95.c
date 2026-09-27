//Check if one string is a rotation of another.
#include <stdio.h>
int main() {
    int n1,n2,i,j,found;
    printf("Enter size of first string: ");
    scanf("%d",&n1);
    char s1[n1+1];
    printf("Enter first string: ");
    scanf("%s",s1);
    printf("Enter size of second string: ");
    scanf("%d",&n2);
    char s2[n2+1];
    printf("Enter second string: ");
    scanf("%s",s2);
    if(n1!=n2) {
        printf("Not a rotation");
        return 0;}
    for(i=0;i<n1;i++) {
        found=1;
        for(j=0;j<n1;j++) {
            if(s1[j]!=s2[(i+j)%n1]) {
                found=0;
                break;}}
        if(found==1) {
            printf("Rotation");
            return 0;}}
    printf("Not a rotation");
    return 0;
}