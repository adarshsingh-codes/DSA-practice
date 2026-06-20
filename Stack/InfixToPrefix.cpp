#include<bits/stdc++.h>
using namespace std;

int precedence(char ch){
    if(ch=='+'||ch=='-') return 1;
    if(ch=='*'||ch=='/') return 2;
    return 0;
}
string InfixToPrefix(string infix){
    string prefix="";
    stack<char> st;
    int len=infix.length();
    reverse(infix.begin(),infix.end());
    for(char &ch:infix){
        if(ch=='(') ch=')';
        else if(ch==')') ch='(';
    }
    for(int i=0;i<len;i++){
        char ch=infix[i];
        if(ch==' '||ch=='\n'){
            continue;
        }
        else if(isalnum(ch)){
            prefix+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }else if(ch==')'){
            while(!st.empty()&&st.top()!='('){
                prefix+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty()&&precedence(st.top())>=precedence(ch)){
                prefix+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        prefix+=st.top();
        st.pop();
    }
    reverse(prefix.begin(),prefix.end());
    return prefix;
}
int main(){
    string infix;
    getline(cin,infix);
    cout<<InfixToPrefix(infix)<<endl;
    return 0;
}