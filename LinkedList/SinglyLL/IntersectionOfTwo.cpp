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
int countnode(Node*&head){
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
Node* intersection(Node*&head,Node*&head2){
    if(head==NULL||head2==NULL){
        return NULL;
    }
    int count1=countnode(head);
    int count2=countnode(head2);
    int diff=0;
    Node* temp=head;
    Node* temp2=head2;
    if(count1>count2){
        diff=count1-count2;
        for(int i=1;i<=diff&&temp!=NULL;i++){
            temp=temp->next;
        }        
    }else{
        diff=count2-count1;
        for(int i=1;i<=diff&&temp2!=NULL;i++){
            temp2=temp2->next;
        } 
    }  
    while(temp!=NULL&&temp2!=NULL){
        if(temp==temp2){
            return temp;
        }
        temp=temp->next;
        temp2=temp2->next;
    }
    return NULL;
}
// ListNode*p1 =headA; //approach 2
    // ListNode*p2=headB;

    // while(p1!=p2){
    //     p1=(p1==NULL)?headB:p1->next;
    //     p2 =(p2==NULL)?headA:p2->next;
    // }
    //return p1;

int main(){
    Node* head=new Node(20);
    insertAtEnd(head,60);
    insertAtEnd(head,80);
    insertAtEnd(head,100);
    insertAtEnd(head,920);
    insertAtEnd(head,950);
    insertAtEnd(head,70);
    insertAtEnd(head,10);
    Node* head2=new Node(40);
    insertAtEnd(head2,540);
    insertAtEnd(head2,340);
    insertAtEnd(head2,700);
    insertAtEnd(head2,20);
    insertAtEnd(head2,80);
    insertAtEnd(head2,90);
    insertAtEnd(head2,100);
    display(head);
    cout<<endl;
    display(head2);
    cout<<endl;
    Node* final=intersection(head,head2);
    cout<<final->data<<endl;
    return 0;
}