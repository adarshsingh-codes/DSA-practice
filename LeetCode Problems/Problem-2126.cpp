#include<bits/stdc++.h>
using namespace std;
bool asteroidsDestroyed(int mass,vector<int>&arr){
    // int count=0;
    // long long destroyed=mass;
    // for(int i=0;i<arr.size();i++){
    //     if(destroyed>=arr[i]){
    //         destroyed+=arr[i];
    //         arr[i]=0;
    //     }
    //     else{
    //         count++;
    //     }
    // }
    // while(count>0){
    //     int temp=0;
    //     for(int i=0;i<arr.size();i++){
    //         if(destroyed>=arr[i]){
    //             destroyed+=arr[i];
    //             arr[i]=0;
    //         }
    //         else{
    //             temp++;
    //         }
    //     }
    //     if(temp==count){
    //         return false;
    //     }
    //     count=temp;
    // }
    // return true;
    sort(arr.begin(),arr.end());
    long long current=mass; 
    for(int x:arr)
    { 
        if(current<x)
        {
            return false;
        }
        current+=x; 
    } 
        return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mass;
    cin>>mass;
    if(asteroidsDestroyed(mass,arr)){
        cout<<"True"<<endl;
    }else{
        cout<<"False";
    }
}