//sort an array if 0,1,2

#include<bits/stdc++.h>
using namespace std;

void brute(vector<int> &arr){
    sort(arr.begin(),arr.end());//merge
}
void better(vector<int>&arr){
    int count0=0;
    int count1=0;
    int count2=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count1+count0;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<count0+count1+count2;i++){
        arr[i]=2;
    }
}

void optimal(vector<int>&arr){ //DUTCH FLAG ALGORITHM 
    int low=0;
    int high=arr.size()-1;
    int mid=0;
    while(mid<=high){
        if(arr[mid]==0){
            int temp=arr[mid];
            arr[mid]=arr[low];
            arr[low]=temp;
            mid++;
            low++;
        }else if(arr[mid]==2){
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }else{
            mid++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //brute(v);
    better(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}