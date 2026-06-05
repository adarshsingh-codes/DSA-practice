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


void insertAtEnd(Node * &head,int val){
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
void display(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deletelist(Node*&head){
    while(head!=NULL){
        Node*temp=head;
        head=head->next;
        delete temp;
    }
}
//search









int main(){
    Node* head=new Node(10);
    insertAtEnd(head,20);
    insertAtEnd(head,90);
    insertAtEnd(head,40);
    insertAtEnd(head,60);
    insertAtEnd(head,30);
    display(head);
    deletelist(head);
    return 0;
}