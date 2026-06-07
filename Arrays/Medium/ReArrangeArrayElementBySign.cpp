#include<bits/stdc++.h>
using namespace std;


//array of sign has n/2 poritive signs adn n/2 negative sign and have to array in th eorder + - + - + -
//order shall be maintained
//eg [3,1,-2,-5,2,-4]
//output: [3,-2,1,-5,2,-4]
void RearrangeArrayElemetnsBySign(vector<int>&arr){
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            v1.push_back(arr[i]);
        }
        else{
            v2.push_back(arr[i]);
        }
    }
    int j=0;
    int k=0;
    for(int i=0;i<arr.size();i++){
        if(i%2==0){
            arr[i]=v1[j++];
        }
        else{
            arr[i]=v2[k++];
        }
    }
}
void optimal(vector<int> &arr){
    vector<int> v(arr.size());
    int pos=0;
    int neg=1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            v[pos]=arr[i];
            pos=pos+2;
        }
        else{
            v[neg]=arr[i];
            neg=neg+2;
        }
    }
    arr=v;
}

//if the number of positive is not euqal to the number of positive;
vector<int> alternateNumbers(vector<int>& a) {
    vector<int> pos, neg;

    int n = a.size();

    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            pos.push_back(a[i]);
        }
        else {
            neg.push_back(a[i]);
        }
    }

    if(pos.size() > neg.size()) {

        for(int i = 0; i < neg.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = neg.size() * 2;

        for(int i = neg.size(); i < pos.size(); i++) {
            a[index] = pos[i];
            index++;
        }

    }
    else {

        for(int i = 0; i < pos.size(); i++) {
            a[2 * i] = pos[i];
            a[2 * i + 1] = neg[i];
        }

        int index = pos.size() * 2;

        for(int i = pos.size(); i < neg.size(); i++) {
            a[index] = neg[i];
            index++;
        }
    }

    return a;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //RearrangeArrayElemetnsBySign(v);
    optimal(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}