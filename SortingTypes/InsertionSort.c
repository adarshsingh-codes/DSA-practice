#include<stdio.h>
InsertionSort(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
            count++;
        }
        arr[j+1]=temp;
    }
    printf("Number of swaps: %d\n",count);
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    InsertionSort(arr,n);
    printf("The Sorted array is :\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}