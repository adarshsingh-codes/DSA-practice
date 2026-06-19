//remove dupicate from sorted array
#include<bits/stdc++.h>
using namespace std;
int removeduplicate(vector<int>& arr){  //O(n)
    int j=0;
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];   
        }
    }
    return j+1;
}
int removeduplicatefromset(vector<int>&arr){   //O(logn)
    set<int> s;
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }
    int index=0;
    for(auto it=s.begin();it!=s.end();it++){
        arr[index]=*(it);
        index++;
    }
    return s.size();
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<removeduplicate(arr)<<endl;
    cout<<removeduplicatefromset(arr)<<endl;
    return 0;
}