//second largest element of the array
#include<stdio.h>
#include<limits.h>
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
    int second_max=INT_MIN;
    int min=arr[0];
    int second_min=INT_MAX;
    //for max and scond max
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            second_max=max;
            max=arr[i];
        }else if(arr[i]>second_max&&arr[i]!=max){
            second_max=arr[i];
        }
    }
    //for min and second min
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            second_min=min;
            min=arr[i];
        }else if(arr[i]!=min&&arr[i]<second_min){
            second_min=arr[i];
        }
    }
    printf("The highest and the secondh highest are: %d and %d\n",max,second_max);
     printf("The highest and the secondh lowest are: %d and %d",min,second_min);
}