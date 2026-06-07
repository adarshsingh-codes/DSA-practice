#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    Node(int value){
        data=value;
        next=NULL;
    }
};
void insertAtend(Node*&head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void display(Node* head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverse(Node* head){
    Node* prev=NULL;
    Node*curr=head;
    Node*next=head;
    while(next!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
int main(){
    Node *head=new Node(20);
    insertAtend(head,30);
    insertAtend(head,40);
    insertAtend(head,60);
    insertAtend(head,80);
    insertAtend(head,90);
    insertAtend(head,30);
    head=reverse(head);
    display(head);
    return 0;
}