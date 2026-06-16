#include<bits/stdc++.h>
using namespace std;
class ListNode{
public:
    int val;
    ListNode*next;
    ListNode(int d){
        val=d;
        next=NULL;
    }
};

 int getRandom(ListNode*head) {
        ListNode*temp=head;
        int count=0;
        int value=0;
        while(temp!=NULL){
            count++;
            if(rand()%count==0){
                value=temp->val;
            }
            temp=temp->next;
        }
        return value;
    }
int main(){

}