#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* insertAtBegining(Node* head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        return newnode;
    }
    newnode->next=head;
    return newnode;
}
void insertAtEnd(Node*&head,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        return ;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}
void InsertAtPosition(Node*&head,int pos,int val){
    Node* newnode=new Node(val);
    if(pos<=0){
        return;
    }
    if(head==NULL){
        //if(pos==1)
            head=newnode;
        return;
    }
    if(pos==1){
        newnode->next=head;
        head=newnode;
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void insertAfterTheValue(Node*&head,int val,int target){
    Node * newnode=new Node(val);
    if(head==NULL){
        return;
    }
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==target){
            newnode->next=temp->next;
            temp->next=newnode;
            return;
        }
        temp=temp->next;
    }
}
void insertBeforeTheValue(Node*&head,int val,int target){
    Node* newnode=new Node(val);
    if(head==NULL){
        return;
    }
    if(head->data==target){
        newnode->next=head;
        head=newnode;
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==target){
            newnode->next=temp->next;
            temp->next=newnode;
            return;
        }
        temp=temp->next;
    }
}
void display(Node*&head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(20);
    head=insertAtBegining(head,30);
    head=insertAtBegining(head,30);
    head=insertAtBegining(head,3210);
    head=insertAtBegining(head,340);
    head=insertAtBegining(head,60);
    InsertAtPosition(head,4,50);
    insertAfterTheValue(head,40,3210);
    insertBeforeTheValue(head,40,3210);
    insertAtEnd(head,90);
    display(head);
    return 0;
}