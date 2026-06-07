//product of array except self;
#include<bits/stdc++.h>
using namespace std;
    vector<int>productExceptSelf(vector<int>& nums) {
        vector<int> arr(nums.size());
        int left=1;
        int right=1; 
        for(int i=0;i<nums.size();i++){
            arr[i]=left;
            left*=nums[i];
        }
        vector<int> arr2(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            arr2[i]=right;
            right*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=arr[i]*arr2[i];
        }
    return nums;
    }


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result=productExceptSelf(arr);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}