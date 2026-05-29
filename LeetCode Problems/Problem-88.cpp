//mergeSortedArrays

#include<bits/stdc++.h>
using namespace std;
void mergesorted(vector<int>&arr1,int n1,vector<int>&arr2,int n2){
    int i=n1-1;
    int j=n2-1;
    int k=n1+n2-1;
    while(i>=0&&j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k]=arr1[i];
            i--;
        }
        else{
            arr1[k]=arr2[j];
            j--;
        }
        k--;
    }
    while(j>=0){
        arr1[k--]=arr2[j--];
    }
    for(auto it:arr1){
        cout<<it<<" ";
    }
}
//     int i=0;
//     int j=0;
//     vector<int> merge;
//     while(i<n1 && j<n2){
//         if(arr1[i] <= arr2[j]){
//             merge.push_back(arr1[i]);
//             i++;
//         }
//         else{
//             merge.push_back(arr2[j]);
//             j++;
//         }
//     }
//     while(i<n1){
//         merge.push_back(arr1[i]);
//         i++;
//     }

//     while(j<n2){
//         merge.push_back(arr2[j]);
//         j++;
//     }
//     for(auto it : merge){
//         cout << it << " ";
//     }
// }
int main(){
    int n1;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    mergesorted(arr1,n1,arr2,n2);
    return 0;
}