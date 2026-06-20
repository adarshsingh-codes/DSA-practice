#include<bits/stdc++.h>
using namespace std;
int evalRPN(vector<string>& tokens) {
    int len=tokens.size();
    stack<int> st;
    for(string ch:tokens){
        if(ch=="*"||ch=="+"||ch=="/"||ch=="-"){
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            if(ch=="+") st.push(a+b);
            else if(ch=="-") st.push(a-b);
            else if(ch=="*") st.push(a*b);
            else st.push(a/b);
        }else{
            st.push(stoi(ch));
        }
    }
    return st.top();
}
int main(){
    int n;
    cin>>n;
    vector<string> tokens(n);
    for(int i=0;i<n;i++){
        cin>>tokens[i];
    }
    cout<<evalRPN(tokens);
}