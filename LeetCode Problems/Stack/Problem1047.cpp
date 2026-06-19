#include<bits/stdc++.h>
using namespace std;

    string removeDuplicates(string s) {
        stack<char> st;
        int len=s.size();
        string ans="";  
        for(int i=0;i<len;i++){
            char ch=s[i];  
            if(!st.empty()&&st.top()==ch){
                st.pop();
            }else{
                st.push(ch);
            }
        }
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
    cout<<removeDuplicates(s);
    return 0;
}