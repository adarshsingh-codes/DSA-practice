#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<char> st;
    int len=s.length();
    for(int i=0;i<len;i++){
        char ch=s[i];
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }
        else if(st.empty()){
            return false;
        }
        else if((ch==')'&&st.top()=='(')
        ||(ch==']'&&st.top()=='[')
        ||(ch=='}'&&st.top()=='{')
            ){
            st.pop();
        }else{
            return false;
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(isValid(s)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }
    return 0;
}