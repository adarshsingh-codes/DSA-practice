#include<bits/stdc++.h>
using namespace std;
int calPoints(vector<string>&operations){
    stack<int> st;
    int len=operations.size();
    for(int i=0;i<len;i++){
        string ch=operations[i];
        if(ch=="C"){
            st.pop();
        }
        else if(ch=="D"){
            int z=st.top();
            st.push(2*z);
        }
        else if(ch=="+"){
            int b=st.top();
            st.pop();
            int a=st.top();
            st.push(b);
            st.push(a+b);

        }else{
            int digit=stoi(ch);
            st.push(digit);
        }
    }
    int sum=0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<string> operations(n);
    for(int i=0;i<n;i++){
        cin>>operations[i];
    }
    cout<<calPoints(operations);
    return 0;
}