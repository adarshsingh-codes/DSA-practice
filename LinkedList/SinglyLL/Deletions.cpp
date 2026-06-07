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
void insertAtEnd(Node*&head,int val){
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
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void DeleteAtbegining(Node*&head){
    if(head==NULL){
        return;
    }
    Node*temp=head;
    head=head->next;
    delete temp;
}
void DeleteAtEnd(Node*&head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        Node*temp=head;
        delete temp;
        head=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    Node*del=temp->next;
    delete del;
    temp->next=NULL;
}
void deleteAtPosition(Node*&head,int pos){
    if(head==NULL||pos<=0){
        return;
    }
    if(pos==1){
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL){
        return;
    }
    Node* del=temp->next;
    temp->next=del->next;
    delete del;
}
void deleteAGivenValue(Node*&head,int target){
    if(head==NULL){
        return;
    }
    if(head->data==target){
        Node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        if(temp->data==target){
            prev->next=temp->next;
            delete temp;
            return;
        }
        prev=temp;
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,90);
    insertAtEnd(head,140);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    insertAtEnd(head,70);
    insertAtEnd(head,80);
    DeleteAtbegining(head);
    deleteAGivenValue(head,90);
    deleteAtPosition(head,4);
    display(head);
    return 0;
}