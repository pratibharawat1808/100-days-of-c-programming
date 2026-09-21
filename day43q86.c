//program to check if a string is a palindrome without using built-in functions.
#include<stdio.h>
int main(){
    char str[100];
    int i,j,len=0;
    printf("Enter a string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        len++;}
    for(i=0,j=len-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            printf("Not a palindrome.");
            return 0;}
    }
    printf("It is a palindrome.");
    return 0;
}