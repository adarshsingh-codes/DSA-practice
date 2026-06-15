#include<bits/stdc++.h>
using namespace std;
int compress(vector<char>& chars) {
    int count=1;
    string s="";
    for(int i=1;i<=chars.size();i++){
        if(i<chars.size()&&chars[i]==chars[i-1]){
            count++;
        }else{
            s+=chars[i-1];
            if(count>1){
                s+=to_string(count);
            }
            count=1;
        }
    }
    return s.length();
}

int main(){
    int n;
    cin>>n;
    vector<char> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<compress(str);
    return 0;
}