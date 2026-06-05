#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
    void insertAtBegining(Node*& head,int val){
        Node* newnode =new Node(val);
        newnode->next=head;
        head=newnode;
        //retunr newnode if it were  a Node* return type
    }
    void insertAtEnd(Node*& head,int val){
        Node* newnode=new Node(val);
        if(head==NULL){
            head=newnode;
            return;
        }
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    void display(Node * head){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    Node *insertAtPosition(Node * head,int pos,int val){
        Node* newnode=new Node(val);
        if(pos==1){
            newnode->next=head;
            return newnode;
        }
        Node*temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;

        return head;
    }
    void insertafteragivenvalue(Node*& head,int val,int target){
        Node* newnode=new Node(val);
        Node *temp=head;
        while(temp!=NULL&&temp->data!=target){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"target not found\n";
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    void insertBeforeGivenValue(Node*& head, int val, int target){
    Node* newnode = new Node(val);
    if(head != NULL && head->data == target){
        newnode->next = head;
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp != NULL && temp->next != NULL &&
        temp->next->data != target){
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL){
        cout << "Target not found\n";
        delete newnode;
        return;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
};

int main(){
    Node * head=new Node(10);
    
    head->insertAtBegining(head, 20);
    head=head->insertAtPosition(head,3,4);
    head->insertAtEnd(head,80);
    head->display(head);
    return 0;
}