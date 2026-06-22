#include<bits/stdc++.h>
using namespace std;
    string removeStars(string s) {
        stack<char> st;
        int len=s.length();
        for(int i=0;i<len;i++){
            char ch=s[i];
            if(ch!='*'){
                st.push(ch);
            }
            else{    //(!st.empty()&&ch=='*'){
                st.pop();
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int main(){
        string s;
        getline(cin,s);
        cout<<removeStars(s);
        return 0;
    }