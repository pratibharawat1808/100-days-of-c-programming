// Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main(){
int a[10][10],sum[10],i,j,r,c,s;
printf("Enter rows and columns: ");
scanf("%d%d",&r,&c);
printf("Enter matrix elements:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&a[i][j]);}
}
for(i=0;i<r;i++){
    s=0;
    for(j=0;j<c;j++){
        s+=a[i][j];
    }
    sum[i]=s;
}
printf("Sum of each row:\n");
for(i=0;i<r;i++){
    printf("Row %d: %d\n",i+1,sum[i]);
}
return 0;
}   