#include<bits/stdc++.h>
using namespace std;
int* arr;
int top=-1;
int capacity;

int isfull(){
    if(top==capacity-1){
        return 1;
    }
    else{
        return 0;
    }
}
int size(){
    return top+1;
}
int isEmpty(){
    if(top==-1){
        return 1;
    }else{
        return 0;
    }
}
void display(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    for(int i=top;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void initialize(){
    cin>>capacity;
    arr=new int[capacity];
}
void push(int val){
    if(top==capacity-1){
        cout<<"Overflow"<<endl;
        return;
    }
    top++;
    arr[top]=val;
}

void pop(){
    if(top==-1){
        cout<<"Stack is empty"<<endl;
        return;
    }
    top--;
}
int peek(){
    if(top==-1){
        cout<<"Underflow"<<endl;
        return -1;
    }
    return arr[top];
}
int main(){
    initialize();
    for(int i=0;i<capacity;i++){
        int x;
        cin>>x;
        push(x);
    }
    pop();
    pop();
    pop();
    cout<<"The top element is: "<<peek()<<endl;
    display();
    cout<<"Size = "<<size()<<endl;
    delete[] arr;
    return 0;
}