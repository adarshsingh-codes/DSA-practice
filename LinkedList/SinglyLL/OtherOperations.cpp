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
void insertAtENd(Node*& head,int val){
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
void display(Node *&head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void countnodes(Node*&head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"No. of nodes: "<<count<<endl;
}
void searchvalue(Node*&head,int target){
    Node*temp=head;
    int count=0;
    if(head==NULL){
        cout<<"List empty"<<endl;
        return;
    }
    while(temp!=NULL){
        count++;
        if(temp->data==target){
            cout<<"Target present at node: "<<count<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"No such element"<<endl;
}
int maxElement(Node*&head){
    if(head==NULL){
        return -1;
    }
    Node*temp=head;
    int maxi=head->data;
    while(temp!=NULL){
        maxi=max(temp->data,maxi);
        temp=temp->next;
    }
    return maxi;
}
int minElement(Node*&head){
    if(head==NULL){
        return -1;
    }
    Node*temp=head;
    int mini=temp->data;
    while(temp!=NULL){
        mini=min(mini,temp->data);
        temp=temp->next;
    }
    return mini;
}
void sort_nodes(Node*head){
    Node*temp=head;
    while(temp->next!=NULL){
        if(temp->data>temp->next->data){
            swap(temp->data,temp->next->data);
        }
        temp=temp->next;
    }
}
int main(){
    Node* head=new Node(30);
    insertAtENd(head,50);
    insertAtENd(head,80);
    insertAtENd(head,20);
    insertAtENd(head,10);
    insertAtENd(head,60);
    insertAtENd(head,40);
    display(head);
    cout<<endl;
    countnodes(head);
    searchvalue(head,60);
    cout<<"The max element in the LL is: "<<maxElement(head)<<endl;
    cout<<"The min element in the LL is: "<<minElement(head)<<endl;
    return 0;
}