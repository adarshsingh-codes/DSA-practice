#include<bits/stdc++.h>
using namespace std;
//varieties- 
//variety one says if its a yes or no
//varieeyy 2 has to return the indexes of the found values as(x,y);

bool twosum_brute(vector<int> &arr,int target){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}
//varity 2 optimal aproach
vector<int> twosum_better(vector<int> &arr,int target){
    map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        int z=target-arr[i];
        if(mp.find(z)!=mp.end()){  //this means the  element exist
            return {mp[z],i};
        }
        mp[arr[i]]=i;
    }
    return {};
}


//only for variety one
void twosum_optimal(vector<int> &arr,int target){
    sort(arr.begin(),arr.end());
    int j=arr.size()-1;
    int i=0;
    while(j>i){
        if((arr[i]+arr[j])<target){
            i++;
        }
        else if((arr[i]+arr[j])>target){
            j--;
        }else{
            cout<<"Yes";
            return;
        }
    }
    cout<<"No";
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    // if(twosum_brute(v,target)){
    //     cout<<"True";
    // }else{
    //     cout<<"false";
    // }
    twosum_optimal(v,target);

    return 0;
}