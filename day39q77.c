//program to check if diagonal elements of a matrix are zero or not.
#include<stdio.h>
int main(){
    int a[10][10],i,j,r,c,flag=1;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    if(r!=c){
        printf("Matrix is not square, so diagonal elements cannot be checked.\n");
        return 0;}
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);}
    }           
    for(i=0;i<r;i++){
        if(a[i][i]!=0){
            flag=0;
            break;}
    }
    if(flag==1){
        printf("All diagonal elements are zero.\n"); }
    else{
        printf("Not all diagonal elements are zero.\n");}
    return 0;
}       