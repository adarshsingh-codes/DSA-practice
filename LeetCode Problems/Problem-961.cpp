#include<bits/stdc++.h>
using namespace std;
int repeatedNTimes(vector<int>& nums) {
        int value=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return nums[i];
                }
            }
        }
        // set<int> s;
        // for(int x : nums) {
        //     if(s.count(x))
        //         return x;
        //     s.insert(x);
        // }

        return -1;
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<repeatedNTimes(arr);
    return 0;
}