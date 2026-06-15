#include<bits/stdc++.h>
using namespace std;


//for better =>in STL
vector<int> permutation(vector<int> arr){
    next_permutation(arr.begin(),arr.end());
    return arr;
}

void permutation_optimal(vector<int>& arr){ //longer prefix m atch
    int idx=-1;
    int n=arr.size();
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(arr.begin(),arr.end());
    }
     for(int i=n-1;i>idx;i--){
        if(arr[i]>arr[idx]){
            swap(arr[i],arr[idx]);
            break;
        }
    }
    reverse(arr.begin()+idx+1,arr.end());

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    permutation_optimal(arr);
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}