#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node*next;
        Node*prev;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
void insertAtBegining(Node*&head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void display(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtEnd(Node*&head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
}
void insertAtPosition(Node*&head,int val,int pos){
    Node*newnode=new Node(val);
    if(pos<=0){
        delete newnode;
        return;
    }
    if(pos==1){
        if(head!=NULL){
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
            return;
        }
        head=newnode;
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp == NULL){
        delete newnode;
        return;
    }
    if(temp->next!=NULL){
        temp->next->prev=newnode;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
}
int main(){
    Node* head=new Node(30);
    insertAtBegining(head,30);
    insertAtBegining(head,0);
    insertAtBegining(head,90);
    insertAtBegining(head,30);
    insertAtBegining(head,60);
    insertAtEnd(head,90);
    insertAtEnd(head,30);
    insertAtEnd(head,12340);
    insertAtPosition(head,80,9);
    display(head);
    return 0;
}