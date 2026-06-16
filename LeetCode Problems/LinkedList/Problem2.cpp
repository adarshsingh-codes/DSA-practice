#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;
    ListNode(int data){
        val=data;
        next=NULL;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* tail=&dummy;
        int carry=0;
        while(l1!=NULL||l2!=NULL){
            int sum=carry;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            carry=sum/10;
            int z=sum%10;
            tail->next=new ListNode(z);
            tail=tail->next;
        }
        if(carry){
            tail->next=new ListNode(carry);
        }
        return dummy.next;


        // ListNode* head = new ListNode(0);
        // ListNode* tail = head;
        // if(l1==NULL&&l2==NULL){
        //     return NULL;
        // }
        // tail->val=0;
        // while(l1!=NULL||l2!=NULL){
        //     if(l1!=NULL){
        //         tail->val+=l1->val;
        //         l1=l1->next;
        //     }
        //     if(l2!=NULL){
        //         tail->val+=l2->val;
        //         l2=l2->next;
        //     }
        //     if(tail->val>=10){
        //         int digit=tail->val/10;
        //         tail->val %=10;
        //         if(tail->next==NULL){
        //             tail->next=new ListNode(digit);
        //         }else{
        //             tail->next->val+=digit;
        //         }
    
        //     }
        //     if(l1!=NULL||l2!=NULL){
        //         if(tail->next==NULL){
        //             tail->next=new ListNode(0);
        //         }
        //         tail=tail->next;
        //     }
        // }
        // return head;
    }
};

int main(){
    return 0;
}