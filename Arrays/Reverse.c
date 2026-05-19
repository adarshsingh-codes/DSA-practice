//reverse an array
#include<stdio.h>
void reverse(int arr[],int low,int high){
    int i=low;
    int j=high-1;
    while(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
        i++;
    }
}

int main(){
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}