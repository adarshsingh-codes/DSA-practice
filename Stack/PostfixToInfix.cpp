#include<bits/stdc++.h>
using namespace std;
string PostfixToInfix(string postfix){
    int len=postfix.length();
    stack<string> st;
    for(int i=0;i<len;i++){
        char ch=postfix[i];
        if(isalnum(ch)){
            st.push(string(1,ch));
        }
        else{
            string b=st.top();
            st.pop();
            string a=st.top();
            st.pop();
            string s="(" + a + string(1,ch) + b + ")";
            st.push(s);
        }
    }
    return st.top();
}
int main(){
    string postfix;
    getline(cin,postfix);
    cout<<PostfixToInfix(postfix);
    return 0;
}