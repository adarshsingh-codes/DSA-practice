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
void display(Node*&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtEnd(Node*&head,Node*&tail,int val){
    Node* newnode=new Node(val);
    if(head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}
void deleteAtbegining(Node*&head,Node*&tail){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }
    Node*del=head;
    head=head->next;
    head->prev=NULL;
    delete del;
}
void deleteAtEnd(Node*&head,Node*&tail){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }
    Node*del=tail;
    tail=tail->prev;
    tail->next=NULL;
    delete del;
}
void deleteAtPosition(Node*&head,Node*&tail,int pos){
    if(pos<=0){
        return;
    }
    if(head==NULL){
        return;
    }
    if(pos==1){
        if(head->next==NULL){
            delete head;
            head=NULL;
            tail=NULL;
            return;
        }else{
            Node*del=head;
            head=head->next;
            head->prev=NULL;
            delete del;
            return;
        }
    }
    Node*temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL||temp->next==NULL){
        return;
    }
    Node*del=temp->next;
    if(del==tail){
        tail=temp;
        tail->next=NULL;
    }else{
        temp->next=del->next;
        del->next->prev=temp;
    }
    delete del;
}
void deletevalue(Node*&head,Node*&tail,int val){
    
    while(head!=NULL&&head->data==val){
        Node*del=head;
        head=head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
        else{
            tail=NULL;
        }
        delete del;
    }
    if(head==NULL){
        return;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            Node*del=temp->next;
            temp->next=del->next;
            if(del->next!=NULL){
                del->next->prev=temp;
            }
            else{
                tail=temp;
                tail->next=NULL;
            }
            delete del;
        }
        else{
            temp=temp->next;
        }
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtEnd(head,tail,90);
    insertAtEnd(head,tail,20);
    insertAtEnd(head,tail,90);
    insertAtEnd(head,tail,100);
    insertAtEnd(head,tail,90);
    insertAtEnd(head,tail,100);
    deleteAtbegining(head,tail);
    deleteAtEnd(head,tail);
    display(head);
}