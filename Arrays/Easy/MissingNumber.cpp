#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=(n*(n+1))/2;
    int sum_arr=0;
    for(int i=0;i<n;i++){
        sum_arr+=arr[i];
    }
    int num=sum-sum_arr;
    cout<<"Missing number is: "<<num<<endl; 
}