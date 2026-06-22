#include<bits/stdc++.h>
using namespace std;
string PrefixToInfix(string prefix){
    int len=prefix.length();
    stack<string> st;
    reverse(prefix.begin(),prefix.end());
    for(int i=0;i<len;i++){
        char ch=prefix[i];
        if(ch==' ') continue;
        if(isalnum(ch)){
            st.push(string(1,ch));
        }else{
            string b=st.top();
            st.pop();
            string a=st.top();
            st.pop();
            string s=")"+a+ch+b+"(";
            st.push(s);
        }
    }
    string x=st.top();
    st.pop();
    reverse(x.begin(),x.end());
    return x;
}

string METHOD2_PrefixToInfix(string prefix) {
    stack<string> st;

    for (int i = prefix.length() - 1; i >= 0; i--) {
        char ch = prefix[i];

        if (ch == ' ')
            continue;

        if (isalnum(ch)) {
            st.push(string(1, ch));
        } else {
            string a = st.top();
            st.pop();

            string b = st.top();
            st.pop();

            string s = "(" + a + ch + b + ")";
            st.push(s);
        }
    }

    return st.top();
}
int main(){
    string prefix;
    getline(cin,prefix);
    cout<<PrefixToInfix(prefix);
    return 0;
}