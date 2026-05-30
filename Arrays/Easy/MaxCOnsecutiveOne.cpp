#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxcount=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxcount=max(count,maxcount);
        }
        else{
            count=0;
        }
        //if(maxcount<count){
          //  maxcount=count;
        //}
    }
    cout<<maxcount;
    return 0;
}