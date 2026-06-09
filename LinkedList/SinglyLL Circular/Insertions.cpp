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
void insertAtBegining(Node*&head,int val){
    Node*newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        newnode->next=head;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newnode->next=head;
    head=newnode;
    temp->next=head;
}
void insertatend(Node*&head,int val){
    Node*newnode=new Node(val);
    if(head==NULL){
        head=newnode;
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
void insertatposition(Node*&head,int val,int pos){
    if(head==NULL||pos<=0){
        return;
    }
    Node* newnode=new Node(val);
    if(pos==1){
        Node*temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        newnode->next=head;
        head=newnode;
        temp->next=head;
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos-1&&temp->next!=head;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void InsertAfterAgivenElement(Node*&head,int val,int target){
    if(head==NULL){
        return;
    }
    Node* newnode=new Node(val);
    if(head->data==target){
        newnode->next=head->next;
        head->next=newnode;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        if(temp->data==target){
            newnode->next=temp->next;
            temp->next=newnode;
            return;
        }else{
            temp=temp->next;
        }
    }
    if(temp->data==target){
        newnode->next=head;
        temp->next=newnode;
        return;
    }
}

void display(Node*&head){
    if(head==NULL) return;
    Node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    Node* head=new Node(30);
    head->next=head;
    insertAtBegining(head,30);
    insertAtBegining(head,40);
    insertAtBegining(head,50);
    insertAtBegining(head,60);
    insertAtBegining(head,70);
    insertatend(head,90);
    insertatend(head,10);
    insertatend(head,190);
    insertatend(head,390);

    display(head);
    return 0;
}