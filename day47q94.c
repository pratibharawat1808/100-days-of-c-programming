//Find the longest word in a sentence.
#include <stdio.h>
int main() {
    int n,i,count=0,max=0,start=0,maxstart=0;
    char s[100];
    printf("Enter size of string: ");
    scanf("%d",&n);
    printf("Enter sentence: ");
    scanf(" %[^\n]",s);
    for(i=0;i<=n;i++) {
        if(s[i]!=' ' && s[i]!='\0') {
            count++;}
        else {
            if(count>max) {
                max=count;
                maxstart=start;}
            count=0;
            start=i+1;}
    }
    printf("Longest word: ");
    for(i=maxstart;i<maxstart+max;i++) {
        printf("%c",s[i]);}
    return 0;
}