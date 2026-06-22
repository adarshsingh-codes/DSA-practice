#include<bits/stdc++.h>
using namespace std;
    int maxIceCream(vector<int>& costs, int coins) {
        // int count=0;
        //  sort(costs.begin(),costs.end());
        // for(int i=0;i<costs.size();i++){
        //     if(coins>=costs[i]){
        //         coins-=costs[i];
        //         count++;
        //     }else{
        //         break;
        //     }
        // }
        // return count;
         vector<int> freq(100001,0);
        for(int i:costs){
            freq[i]++;
        }
        int count=0;
        for(int i=1;i<=100000;i++){
            while(freq[i]>0&&coins>=i){
                coins=coins-i;
                freq[i]--;
                count++;
            }
        }
        return count;
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int coins;
    cin>>coins;
    cout<<maxIceCream(v,coins);
    return 0;
}