//remove linked list element
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
Node* removeElements(Node* head, int val) {
        if(head==NULL){
            return NULL;
        }
        if(head->data==val){
            Node* del=head;
            head=head->next;
            delete del;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            if(temp->next->data==val){
                Node*del=temp->next;
                temp->next=del->next;
                delete del;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }

int main(){
    Node* head=new Node(20);
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,6);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    head=removeElements(head,6);
    display(head);
    cout<<endl;
    
    return 0;
}
