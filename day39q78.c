//program to find the sum of main diagonal elements of a square matrix.
#include<stdio.h>
int main(){
    int a[10][10],i,j,r,c,sum=0;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    if(r!=c){
        printf("Matrix is not square, so main diagonal elements cannot be summed.\n");  
        return 0;}
    printf("Enter matrix elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);}
    }
    for(i=0;i<r;i++){
        sum+=a[i][i];
    }               
    printf("Sum of main diagonal elements: %d\n",sum);
    return 0;
}   