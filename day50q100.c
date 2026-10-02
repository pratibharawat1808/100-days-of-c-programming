//Print all sub-strings of a string
#include <stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter string size: ");
    scanf("%d",&n);
    char s[n+1];
    printf("Enter string: ");
    scanf("%s",s);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                printf("%c",s[k]);}
            printf("\n");}}

   return 0;
}