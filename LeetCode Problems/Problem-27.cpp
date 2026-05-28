//remove element
#include<bits/stdc++.h>
using namespace std;
int removeelement(vector<int>& arr,int val){  //O(n)
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=val){
            arr[j]=arr[i];
            j++;
        }
    }
    return j+1;
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
    cout<<removeelement(arr,k)<<endl;
    return 0;
}