#include<bits/stdc++.h>
using namespace std;

    int missingNumber(vector<int>& arr) {
    int n=arr.size();
    int sum=(n*(n+1))/2;
    int sum_arr=0;
    for(int i=0;i<n;i++){
        sum_arr+=arr[i];
    }
    //xor
    // int xor1=0;
    //int n=N-1;
    // int xor2=0;
    // for(int i=0;i<n;i++){
    //     xor2=xor2^a[i];
        //xor1=xor1^(i+1);
    // }
    //xor1=xor1^n;
    // return xor1^xor2;
    return sum-sum_arr;
    }



int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int z=missingNumber(arr);
    cout<<z<<endl;
    return 0;
}