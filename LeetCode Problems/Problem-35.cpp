//search insert position

#include<bits/stdc++.h>
using namespace std;
int searchindex(vector<int>&arr,int target){
    int z=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            z=i;
            break;
        }
        else if(arr[i]>target){
            z=i;
            break;
        }else{
            z=arr.size();
        }
    }
    return z;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int z=searchindex(arr,k);
    cout<<z<<endl;
    return 0;
}