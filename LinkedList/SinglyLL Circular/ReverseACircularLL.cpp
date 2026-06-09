#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtEnd(Node*&head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        newnode->next=head;
        return;
    }
    if(head==head->next){
        head->next=newnode;
        newnode->next=head;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;
}
void display(Node*&head){
    if(head==NULL){
        return;
    }
    Node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
void ReverseLL(Node*&head){
    if(head == NULL || head->next == head){
        return;
    }
    Node*curr=head;
    Node*prev=head;
    while(prev->next!=head){
        prev=prev->next;
    }
    do{
        Node*temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }while(curr!=head);
    head = prev;
}
int main(){
    Node*head=new Node(20);
    head->next=head;
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    insertAtEnd(head,70);
    insertAtEnd(head,80);
    insertAtEnd(head,90);
    display(head);    
    cout<<endl; 
    ReverseLL(head);
    display(head);
    return 0;
}