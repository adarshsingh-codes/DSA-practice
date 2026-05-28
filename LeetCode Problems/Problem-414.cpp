//third largest number of an array

#include<bits/stdc++.h>
using namespace std;
int thirdmax(vector<int> &arr){
    long max1=arr[0];
    long sec_max=LONG_MIN;
    long third_max=LONG_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max1){
            third_max=sec_max;
            sec_max=max1;
            max1=arr[i];
        }else if(arr[i]!=max1&&arr[i]!=sec_max&&sec_max<arr[i]){
            third_max=sec_max;
            sec_max=arr[i];
        }else if(arr[i]!=max1&&arr[i]!=sec_max&&arr[i]>third_max){
            third_max=arr[i];
        }
    }
    if(third_max==LONG_MIN){
        return max1;
    }else{
        return third_max;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long value=thirdmax(arr);
    cout<<value<<endl;
    return 0;
}