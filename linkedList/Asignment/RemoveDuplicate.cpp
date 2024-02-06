// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* temp=head;
       if(temp==NULL){
           return head;
       }
       if(temp->next==NULL){
           return head;
       }
       while(temp!=NULL)
       {
           
           if(temp->next!=NULL&&temp->val==temp->next->val)
           {
               ListNode* nextNode=temp->next;
               temp->next=nextNode->next;
              
               nextNode->next=NULL;
               delete nextNode;

           }
           else
           {
               temp=temp->next;
               
           }
           
       }
       return head;
    }  
};
