//program to perform diagonal traversal of a matrix.
#include<stdio.h>
int main(){
    int a[10][10],i,j,r,c;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);}
    }
    printf("Diagonal traversal of the matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==j || i+j==r-1){
                printf("%d ",a[i][j]);}
        }
    }
    printf("\n");
    return 0;
}       
    