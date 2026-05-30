#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>&nums){
    int max=nums[0];
    int k=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            max=nums[i];
            k=i;
        }
    }
    int z=0;
    int val=0;
    int  j=0;
    for(int i=0;i<nums.size();i++){
        if(i==k){
            continue;
        }
        if(i*nums[i]>z){
            z=nums[i]*i;
            val=nums[i];
            j=i;
        }
    }
    int area=(j-k)*val;
    return area;

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxArea(v);
    return 0;
}