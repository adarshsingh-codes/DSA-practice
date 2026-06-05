//subarray
//calculate the sum of every possible array
#include<bits/stdc++.h>
using namespace std;
void Subarray(vector<int> arr){
    int n=arr.size();

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){//for summation
                sum+=arr[k];
            }
            cout<<"Subarray sum: "<<sum<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Subarray(arr);
    return 0;
}