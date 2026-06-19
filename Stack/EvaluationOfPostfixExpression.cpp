#include<bits/stdc++.h>
using namespace std;
int* arr;
int top=-1;
int capacity;
int isFull(){
    if(top==capacity-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
void push(int val){
    if(isFull()){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    arr[top]=val;
}
int pop(){
    if(isEmpty()){
        return -1;
    }
    return arr[top--];
}
void postfixEvaluation(){

}
int main(){
    string postfix;
    getline(cin,postfix);
    capacity = postfix.length();
    arr = new int[capacity];
    int len=postfix.size();
    for(int i=0;i<len;i++){
        char ch=postfix[i];
        if(ch==' '||ch=='\n'){
            continue;
        }
        if(isdigit(ch)){
            push(ch-'0');
        }
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            int b=pop();
            int a=pop();
            switch(ch){
                case '+': push(a+b); break;
                case '-': push(a-b); break;
                case '*': push(a*b); break;
                case '/': push(a/b); break;
            }
        }
    }
    cout<<pop();
    return 0;
}