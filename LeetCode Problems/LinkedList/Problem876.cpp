//middle element

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
int countNOdes(Node*&head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* middleNode(Node* head) {  //better
        if(head==NULL){
            return NULL;
        }
        int count=countNOdes(head);
        Node*temp=head;
        for(int i=1;i<=count/2;i++){
            temp=temp->next;
        } 
        return temp;
}
Node* middle_optimal(Node* head){
    Node*slow=head;
    Node*fast=head;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
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
int main(){
    Node* head=new Node(20);
    insertAtEnd(head,60);
    //insertAtEnd(head,80);
    //insertAtEnd(head,100);
   // insertAtEnd(head,920);
    insertAtEnd(head,950);
    insertAtEnd(head,70);
    insertAtEnd(head,10);
    display(head);
    cout<<endl;
    Node* middle=middleNode(head);
    cout<<"Middle Element: "<<middle->data<<endl;
    return 0;
}