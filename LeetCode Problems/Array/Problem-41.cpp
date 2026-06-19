#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int> &arr){
    int n=arr.size();
    vector<int> v(n+1,0);
    for(int i:arr){
        if(i>0&&i<=n){
            v[i]=1;
        }
    }
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            return i;
        }
    }
    return n+1;
}

//brute
//  set<int>s;
//         for(int i:arr){
//             if(i>0){
//                 s.insert(i);
//             }
//         }
//         for(int i=1;i<=arr.size()+1;i++){
//             if(s.count(i)==1){
//                 continue;
//             }else{
//                 return i;
//             }
//         }
//         return arr.size()+1;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int z=firstMissingPositive(arr);
    cout<<z<<endl;
    return 0;
}