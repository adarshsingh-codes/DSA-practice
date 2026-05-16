#include<stdio.h>
void merge(int arr[],int low,int mid,int high){
    int n1=mid-low+1;
    int n2=high-mid;
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++){
        a2[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=low;
    while(i<n1&&j<n2){
        if(a1[i]<=a2[j]){
            arr[k++]=a1[i++];
        }else{
            arr[k++]=a2[j++];
        }
    }
    while(i<n1){
        arr[k++]=a1[i++];
    }
    while(j<n2){
        arr[k++]=a2[j++];
    }
}
void MergeSort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    MergeSort(arr,0,n-1);
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}