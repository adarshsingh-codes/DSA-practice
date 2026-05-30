#include<iostream>
using namespace std;
int bruteforce(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++;
            }
        }
        if(count==1){
            return num;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int xor1=0;
    for(int i=0;i<n;i++){
        xor1=xor1^arr[i];
    }
    cout<<"the number that appears onyl once is : "<<xor1<<endl;
    return 0;
}