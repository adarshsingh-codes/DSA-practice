//majority element-an element that appears more thna n/2 time (MORE THAN)
#include<bits/stdc++.h>
using namespace std;
void brute(vector<int> &arr){  //O(n^2)
    int n=arr.size();
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>n/2){
            cout<<arr[i]<<endl;
            return;
        }
    }
    cout<<"no such element";
}

int better(vector<int> &arr){
    //keep a track of count
    map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto i: mpp){
        if(i.second>(arr.size()/2)){
            return i.first;
        }
    }
    return -1;
}


//moore's voting algo
int optimal(vector<int> &arr){
    int el;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(count==0){
            count=1;
            el=arr[i];
        }
        else if(arr[i]==el){
            count++;
        }
        else{
            count--;
        }
    }
    int cnt1=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==el) cnt1++;
    }
    if(cnt1>(arr.size()/2)){
        return el;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<better(v);
    return 0;
}