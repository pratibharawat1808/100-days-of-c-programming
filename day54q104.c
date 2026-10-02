//program to find Pivot Integer
#include <stdio.h>
int main(){
    int n,i;
    int leftsum,rightsum;
    int pivot=-1;
    printf("Enter positive integer n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        leftsum=0;
        rightsum=0;
        for(int j=1;j<=i;j++){
            leftsum=leftsum+j;}
        for(int j=i;j<=n;j++){
            rightsum=rightsum+j;}
        if(leftsum==rightsum){
            pivot=i;
            break;
        }
    }
    printf("Pivot integer = %d",pivot);
    return 0;
}