//sortlist
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

Node* findMiddle(Node* head){
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* merge(Node*left,Node*right){
    Node dummy(0);
    Node* tail=&dummy;
    while(left!=NULL&&right!=NULL){
        if(left->data<=right->data){
            tail->next=left;
            left=left->next;
        }else{
            tail->next=right;
            right=right->next;
        }
        tail=tail->next;
    }
    if(left){
        tail->next=left;
    }
    if(right){
        tail->next=right;
    }
    return dummy.next;
}
Node* mergeSort(Node*head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* mid=findMiddle(head);
    Node* left=head;
    Node* right=mid->next;
    mid->next=NULL;
    left=mergeSort(left);
    right=mergeSort(right);
    return merge(left,right);
}
Node* bubbleSort(Node* head){
    if(head==NULL)
        return head;
    for(Node*i=head;i!=NULL;i=i->next){
        for(Node*j=head;j->next!=NULL;j=j->next){
            if(j->data>j->next->data){
                swap(j->data,j->next->data);
            }
        }
    }
    return head;
}
int main(){
    Node* head=new Node(20);
    insertAtEnd(head,60);
    //insertAtEnd(head,80);
    //insertAtEnd(head,100);
    //insertAtEnd(head,920);
    insertAtEnd(head,950);
    insertAtEnd(head,70);
    insertAtEnd(head,10);
    display(head);
    cout<<endl;
    
    return 0;
}