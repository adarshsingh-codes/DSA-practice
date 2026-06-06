#include<bits/stdc++.h>
using namespace std;
int maximumSubArraySum_brute(vector<int> &arr){
    int n=arr.size();
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(sum,maxi); //option 1
        }
    }
    return maxi;
}
void maximumSubArraySum_optimal_kadane(vector<int> &arr){
    int n=arr.size();
    int maxi=INT_MIN;
    int sum=0;
    int ansstart=-1;
    int ansend=-1;
    int start=0;
    for(int i=0;i<n;i++){
        if(sum==0){
           start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    for(int i = ansstart; i <= ansend; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int kadane(vector<int> &v){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maximumSubArraySum_brute(v)<<endl;
    cout<<kadane(v)<<endl;
}