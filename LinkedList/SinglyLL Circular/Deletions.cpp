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
    temp->next=newnode;
}
void display(Node*&head){
    Node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
void deleteAtbegining(Node*&head){
    if(head==NULL){
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node*del=head;
    head=head->next;
    temp->next=head;
    delete del;
}
void deleteatend(Node*&head){
    if(head==NULL){
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    Node*del=temp->next;
    temp->next=head;
    delete del;
}
void deleteatposition(Node*&head,int pos){
    if(head==NULL||pos<=0){
        return;
    }
    if(pos==1){
        if(head->next==head){
            delete head;
            head=NULL;
            return;
        }
        Node*temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        Node*del=head;
        head=head->next;
        temp->next=head;
        delete del;
        return;
    }
    Node*temp=head;
    for(int i=1;i<pos-1&&temp->next!=head;i++){
        temp=temp->next;
    }
    if(temp->next==head){
        return;
    }
    Node*del=temp->next;
    temp->next=temp->next->next;
    delete del;
}
void deleteTheValue(Node*&head,int target){
    if(head==NULL){
        return ;
    }
    if(head->data==target){
        if(head->next==head){    
            delete head;
            head=NULL;
            return;
        }
        Node*last=head;
        while(last->next!=head){
            last=last->next;
        }
        Node*del=head;
        head=head->next;
        last->next=head;
        delete del;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        if(temp->next->data==target){
            Node*del=temp->next;
            temp->next=del->next;
            delete del;
            return;
        }else{
            temp=temp->next;
        }
    }
}
int main(){
    Node* head=new Node(20);
    head->next=head;
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    insertAtEnd(head,60);
    insertAtEnd(head,70);
    insertAtEnd(head,80);
    deleteatend(head);
    //deleteAtbegining(head);
    deleteatend(head);
    display(head);
    return 0;
}