//LOngest subarray sub that is equal to K (only positive)
#include<bits/stdc++.h>
using namespace std;
void SubArray_brute(vector<int>&arr,int t){ //brute
    int sum;
    int n=arr.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum==t){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
}
void SubArray_brute2(vector<int>&arr,int t){ //another brute force //O(n^2)
    int sum;
    int n=arr.size();
    int maxlen=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==t){
                maxlen=max(maxlen,j-i+1);
            }
        }
    }
}

//applicable for ony positive numbers 
int SubArray(vector<int>&arr,long long t){ //another brute force
    map<long,long> presumMap;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==t){
            maxlen=max(maxlen,i+1);
        }
        int rem=sum-t;
        if(presumMap.find(rem)!=presumMap.end()){//if value exits the iterator si returned warna not 
            int len=i-presumMap[rem];
            maxlen=max(maxlen,len);
        }
        presumMap[sum]=i;
    }
    return maxlen;
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
    SubArray(arr,k);
    return 0;
}