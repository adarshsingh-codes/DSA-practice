#include<bits/stdc++.h>
using namespace std;
int sumofdigit(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}
int minElement(vector<int>&nums){
    for(int i=0;i<nums.size();i++){
        nums[i]=sumofdigit(nums[i]);
    }
    int min=nums[0];
    for(int i=0;i<nums.size();i++){
        if(min>nums[i]){
            min=nums[i];
        }
    }
    return min;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<minElement(v);
    return 0;
}