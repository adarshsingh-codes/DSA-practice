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
void insertAtBegining(Node*& head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    head=newnode;
}
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
void DeleteAtBegining(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=temp->next;
    delete temp;
}
void deleteatend(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void deleteTheValue(Node*&head,int val){
    if(head==NULL){
        return;
    }
    if(head->data==val){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL&&temp->data!=val){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"value not found"<<endl;
        return;
    }
    prev->next=temp->next;
    delete temp;
}
void deleteatposition(Node* &head,int pos){
    if(head==NULL||pos<=0){
        return;
    }
    if(pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    Node* prev=NULL;
    for(int i=1;i<pos&&temp!=NULL;i++){
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        return;
    }
    prev->next=temp->next;
    delete temp;
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
int main(){
    Node* head=new Node(10);
    insertAtEnd(head,20);
     insertAtEnd(head,90);
      insertAtEnd(head,40);
       insertAtEnd(head,60);
    insertAtEnd(head,30);
    DeleteAtBegining(head);
    deleteatend(head);
    display(head);
    deletelist(head);
    return 0;
}