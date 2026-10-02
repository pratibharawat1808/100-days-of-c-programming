//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
int main(){
    int n,i,target;
    int first=-1,last=-1;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter sorted array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    printf("Enter target: ");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        if(arr[i]==target){
            if(first==-1)
                first=i;
            last=i;}}
    printf("First occurrence = %d\n",first);
    printf("Last occurrence = %d\n",last);
    return 0;
}