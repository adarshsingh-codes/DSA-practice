#include<bits/stdc++.h>
using namespace std;
void rev(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
        if(i==n-1){
            arr[i]=temp;
        }
    }
}

//shift by k spaces
void leftBruteByKelement(int arr[],int n,int k){
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //int j=0;
    for(int i=n-k;i<n;i++){
        //arr[i]=temp[j];
        arr[i]=temp[i-(n-k)];
        //j++;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    //rev(arr,n);
    leftBruteByKelement(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}