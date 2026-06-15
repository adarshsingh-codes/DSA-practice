#include<bits/stdc++.h>
using namespace std;
int countPrimes(int n) {
    int count=0;
    for(int i=0;i<n;i++){
        int a=1;
        if(i==0||i==1){
            a=0;
        }
        for(int j=2;j<i;j++){
            if(i%j==0){
                a=0;
            }
        }
        if(a==1){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countPrimes(n);
    return 0;
}