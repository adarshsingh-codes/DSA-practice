//check if n and its double exist
#include<bits/stdc++.h>
using namespace std;
bool checkIfExist(vector<int>&arr){  //O(n^2)
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j&&arr[i]==2*arr[j]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(checkIfExist(arr)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}