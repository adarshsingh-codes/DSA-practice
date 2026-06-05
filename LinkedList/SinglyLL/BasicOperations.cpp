#include<bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
public:
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
int main(){
    Node *head;
    head=NULL;
    vector<int>arr={2,3,4,5};
    Node * y= new Node(arr[0],nullptr);//gives memeory location to the 
    cout<<y<<endl;
    Node x=Node(arr[0],nullptr);
    cout<<x.data<<" "<<x.next<<endl;
}