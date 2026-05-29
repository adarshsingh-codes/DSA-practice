#include<bits/stdc++.h>
using namespace std;

//optimal
void intersectionarr(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionarr;
    while(i<n1&&j<n2){
        if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }
        else{
            unionarr.push_back(a[i]);
            i++;
            j++;
        }
    }
    
    for(auto x:unionarr){
        cout<<x<<" ";
    }
    
}
int main(){
    int n1;
    cin>>n1;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    intersectionarr(arr1,arr2);
    return 0;
}