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
        return ;
    }
    Node*temp=head;
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
Node* deleteDuplicate(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            Node* del=temp->next;
            temp->next=del->next;
            delete del;
        }else{
            temp=temp->next;
        }
    }
    return head;
}
int main(){
    Node* head=new Node(20);
    insertAtEnd(head,30);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,50);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    insertAtEnd(head,70);
    head=deleteDuplicate(head);
    display(head);
    cout<<endl;
    return 0;
}