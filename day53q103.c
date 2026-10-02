//program to find Pivot Index
#include <stdio.h>
int main(){
    int n,i,j;
    int leftsum,rightsum;
    int pivot=-1;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    for(i=0;i<n;i++){
        leftsum=0;
        rightsum=0;
        for(j=0;j<i;j++){
            leftsum=leftsum+arr[j];}
        for(j=i+1;j<n;j++){
            rightsum=rightsum+arr[j];}
        if(leftsum==rightsum){
            pivot=i;
            break;
        }
    }
    printf("Pivot index = %d\n",pivot);
    return 0;
}
