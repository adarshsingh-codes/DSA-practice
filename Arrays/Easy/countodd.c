//count of odd numbers
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
    int count_odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count_odd++;
        }
    }
    printf("The number of odd elements in the array is %d",count_odd);
    return 0;
}