#include<bits/stdc++.h>
using namespace std;
vector<int> sortEvenOdd(vector<int>& nums) {
    vector<int> v1; //even
    vector<int> v2;//odd
    for(int i=0;i<nums.size();i++){
        if(i%2==0){
            v1.push_back(nums[i]);
        }else{
            v2.push_back(nums[i]);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    int pos=0;
    int neg=0;
    for(int i=0;i<nums.size();i++){
        if(i%2==0){
            nums[i]=v1[pos++];
        }else{
            nums[i]=v2[neg++];
        }
    }
    return nums;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> result=sortEvenOdd(v);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}