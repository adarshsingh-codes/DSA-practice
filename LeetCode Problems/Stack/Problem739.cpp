#include<bits/stdc++.h>
using namespace std;

    //brute
    vector<int> dailyTemperatures(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            bool found=false;
            int count=0;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    ans.push_back(j-i);
                    found=true;
                    break;
                }
            }
            if(found==false){
                ans.push_back(0);
            }
        }
        return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        cin>>temp[i];
    }
    return 0;
}