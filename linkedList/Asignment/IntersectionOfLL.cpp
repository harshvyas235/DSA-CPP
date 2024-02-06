// https://leetcode.com/problems/intersection-of-two-linked-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
        
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
    ListNode* a= headA;
    ListNode* b= headB;
    if(headA==headB){
        return headA;
    }
    int count1 =0;
    int count2=0;
    
    
    while(a->next!=NULL&&b->next!=NULL){
        if(a==b){
            return a;
        }

        a=a->next;
        b=b->next;
    }

    if(a->next==NULL && b->next==NULL && a!=b){
        return 0;
    }

    while(a->next!=NULL){
        a= a->next;
        count1++;
    }
    while(b->next!=NULL){
        b=b->next;
        count2++;

    }
    if(a->next==NULL && b->next==NULL && a!=b){
        return 0;
    }
    a=headA;
    b=headB;

    while(count1 !=0){
        a=a->next;
        count1--;
    }
    while(count2 !=0){
        b=b->next;
        count2--;
    }
    

    while(a!=NULL &&b!=NULL){
        if(a==b){
            return a;
        }
        a=a->next;
        b=b->next;
    }

    return 0;
    }

   
};