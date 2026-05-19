//second largest element of the array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second_max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }else if(arr[i]>second_max&&arr[i]!=max){
            second_max=arr[i];
        }
    }
    printf("The highest and the secondh highest are: %d and %d",max,second_max);
}