// //Check if a given array is sorted or not

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of elements");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter the elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int isSorted=1;
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             isSorted=0;
//             break;
//         }
//     }
//     if(isSorted==1){
//         printf("The given array is sorted");
//     }else{
//         printf("The array is not sorted");
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool checksorted(vector<int> &arr){
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1]){ //for non descending
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checksorted(arr)){
        cout<<"Yes sorted";
    }else{
        cout<<"Nt sorted";
    }
    return 0;
}
