//program to Print each character of a string on a new line
#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Characters in the string:\n");
    for(i=0;str[i]!='\0';i++){
        if(str[i]!='\n'){ // Exclude the newline character
            printf("%c\n",str[i]);
        }
    }
    return 0;
}