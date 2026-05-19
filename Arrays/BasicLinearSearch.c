//search the key's index
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements");
    scanf("%d",&n);
    int key;
    printf("Enter key");
    scanf("%d",&key);
    int arr[n];
    printf("enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0;
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            found=1;
            break;
        }
    }
    if(found==0){
        printf("found at index: %d",index);
    }else{
        printf("element not found");
    }
    return 0;
}