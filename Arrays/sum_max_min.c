#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The sum of the array is %d\nThe max and min elements of the array is %d and %d\n",sum,max,min);
    return 0;
}