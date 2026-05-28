//array rotation both left and right
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
    int k;
    printf("enter value by which we want to shift");
    scanf("%d",&k);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //right rotation
    reverse(arr,0,n);
    reverse(arr,0,k);
    reverse(arr,k,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nnow left\n");
    return 0;
}


//array rotation both left and right
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
    int k;
    printf("enter value by which we want to shift");
    scanf("%d",&k);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //left rotation
    reverse(arr,0,k);
    reverse(arr,k,n);
    reverse(arr,0,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nnow left\n");
    return 0;
}
