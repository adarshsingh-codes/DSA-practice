#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("ENter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int second_max=INT_MIN;
    int third_max=INT_MIN;
    int min=arr[0];
    int second_min=INT_MAX;
    int third_min=INT_MAX;
    //for max
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            third_max=second_max;
            second_max=max;
            max=arr[i];
        }else if(arr[i]!=max&&second_max<arr[i]){
            third_max=second_max;
            second_max=arr[i];
        }else if(arr[i]!=max&&arr[i]!=second_max&&third_max<arr[i]){
            third_max=arr[i];
        }
    }
    //for min
    for(int i=0;i<n;i++){
        if (min>arr[i]){
            third_min=second_min;
            second_min=min;
            min=arr[i];
        }else if(arr[i]!=min&&second_min>arr[i]){
            third_min=second_min;
            second_min=arr[i];
        }else if(arr[i]!=second_min&&arr[i]!=min&&third_min>arr[i]){
            third_min=arr[i];
        }
    }
    printf("The third highest number is %d",third_max);
    printf("The third smallest number is %d",third_min);
    return 0;
}