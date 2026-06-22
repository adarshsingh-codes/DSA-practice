// //MONOTONIC stack
// isme an order is always maintained either increasing or either decreasing


#include<bits/stdc++.h>
using namespace std;
void nextGreater_bruteForce(vector<int>&arr){
    vector<int> ans(arr.size(),-1);
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]>arr[i]){
                ans[i]=arr[j];
                break;
            }
        }
    }
    for(int x:ans){
        cout<<x<<" ";
    }
}

void nextGreater_monotonic(vector<int> &arr){
    stack<int> st;
    for(int i=arr.size();i>=0;i--){
        if(arr[i]<=st.top()){
            st.pop();
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    nextGreater_bruteForce(arr);
    
}