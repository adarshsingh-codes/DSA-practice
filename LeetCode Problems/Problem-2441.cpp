#include<bits/stdc++.h>
using namespace std;
int findMaxK(vector<int>& nums){
    // vector<int> arr;
    // for(int i=0;i<nums.size()-1;i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]==-nums[j]){
    //             arr.push_back(abs(nums[i]));
    //         }
    //     }
    // }
    // int max=-1;
    // for(int i=0;i<arr.size();i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }
    
    // return max;
    unordered_set<int> s;
    for(int x:nums){
        s.insert(x);
    }
    int z=-1;
    for(int x:s){
        if(s.count(-x)){
            z=max(z,abs(x));
        }
    }
    return z;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findMaxK(arr);
    return 0;
}