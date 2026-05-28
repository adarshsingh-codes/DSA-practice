#include<bits/stdc++.h>
using namespace std;
void reversestring(vector<char>&s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }   
    //reverse(s.begin(),s.end());
}
int main(){
    int n;
    cin>>n;
    vector<char> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    reversestring(v);
    for(char ch:v){
        cout<<ch;
    }
    return 0;
}