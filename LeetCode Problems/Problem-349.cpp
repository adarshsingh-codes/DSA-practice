#include<bits/stdc++.h>
using namespace std;
// //brute
// void intersectionarr(vector<int> a,vector<int> b){
//     int n1=a.size();
//     int n2=b.size();
//     vector<int> arr;
//     for(int i=0;i<n1;i++){
//         int found=0;
//         for(auto x:arr){
//             if(a[i]==x){
//                 found=1;
//                 break;
//             }
//         }
//         if(found==1){
//             continue;
//         }
//         for(int j=0;j<n2;j++){
//             if(a[i]==b[j]){
//                 arr.push_back(a[i]);
//                 break;
//             }
//         }
//     }
//     for(auto c: arr){
//         cout<<c<<" ";
//     }
// }

//optimal
void intersectionarr(vector<int> &a,vector <int> &b){
    set<int>s (a.begin(),a.end());
    set<int>s2;
    for(int x:b){
        if(s.count(x)==1){
            s2.insert(x);
        };
    }
    for(auto x:s2){
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