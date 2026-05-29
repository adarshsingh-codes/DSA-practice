#include<bits/stdc++.h>
using namespace std;
//bruteforce  //set returns  unique in sorted order
// void uniqueele(int arr1[],int arr2[],int n1,int n2){
//     set<int> s;
//     for(int i=0;i<n1;i++){
//         s.insert(arr1[i]);
//     }
//     for(int i=0;i<n2;i++){
//         s.insert(arr2[i]);
//     }
//     for(auto x:s){
//         cout<<x<<" ";
//     }
// }

//optimal
void findunique(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unionarr;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
            if(unionarr.size()==0 ||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionarr.size()==0||unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(unionarr.size()==0||unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
        }
        j++;
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
    findunique(arr1,arr2);
    return 0;
}