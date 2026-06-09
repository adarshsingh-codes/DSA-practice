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
bool searchNODE(Node*&head,int target){
    if(head==NULL){
        return false;
    }
    if(head->data==target){
        return true;
    }
    Node* temp=head;
    while(temp->next!=head){
        if(temp->data==target){
            return true;
        }else{
            temp=temp->next;
        }
    }
    if(temp->data==target){
        return true;
    }
    return false;
}
int countnodes(Node*&head){
    int count=0;
    if(head==NULL){
        return 0;
    }
    Node*temp=head;
    do{
        count++;
        temp=temp->next;
    }while(temp!=head);
    return count;
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
     if(searchNODE(head,90)==true){
        cout<<"true"<<endl;
     }else{
        cout<<"false"<<endl;
     }
     cout<<countnodes(head)<<endl;
    return 0;
}