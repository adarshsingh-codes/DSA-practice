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
void splitHalf(Node*head,Node*& head1,Node*&head2){
    if(head==NULL){
        head1=NULL;
        head2=NULL;
        return;
    }
    Node*slow=head;
    Node*fast=head;

    while(fast->next!=head&&fast->next->next!=head){
        slow=slow->next;
        fast=fast->next->next;
    }
    // Even number of nodes
    if(fast->next->next==head){
        fast = fast->next;
    }
    head1 = head;
    head2 = slow->next;
    // Make first half circular
    slow->next = head1;
    // Make second half circular
    fast->next = head2;
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

    Node* head1 = NULL;
    Node* head2 = NULL;

    splitHalf(head, head1, head2);

    display(head1);
    cout << endl;
    display(head2);
    return 0;
}