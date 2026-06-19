#include<bits/stdc++.h>
using namespace std;
int precedence(char ch){
    if(ch=='+'||ch=='-') return 1;
    if(ch=='*'||ch=='/') return 2;
    return 0;
}
string InfixToPostfix(string infix){
    string postfix="";
    int len=infix.length();
    stack<char>st;
    for(int i=0;i<len;i++){
        char ch=infix[i];
        if(ch==' '||ch=='\n'){
            continue;
        }
        else if(isalnum(ch)){
            postfix+=ch;
        }
        else if(ch=='('){
           st.push(ch);
        }
        else if(ch==')'){
            while(!st.empty()&&st.top()!='('){
                postfix+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty()&&precedence(st.top())>=precedence(ch)){
                postfix+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }
    return postfix;
}

int main(){
    string infix;
    getline(cin,infix);
    cout<<InfixToPostfix(infix)<<endl;
    return 0; 
}