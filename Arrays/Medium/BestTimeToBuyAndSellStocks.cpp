#include<bits/stdc++.h>
using namespace std;
int buyandsell(vector<int> &v){
    int maxi=0;
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]<v[j]){
                int sum=v[j]-v[i];
                maxi=max(sum,maxi);
            }
        }
    }
    return maxi;
}
int optimal(vector<int> arr){
    int mini=arr[0];
    int maxprofit=0;
    for(int i=1;i<arr.size();i++){
        int profit=arr[i]-mini;
        maxprofit=max(maxprofit,profit);
        mini=min(mini,arr[i]);
    }
    return maxprofit;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<buyandsell(v);
    return 0;
}