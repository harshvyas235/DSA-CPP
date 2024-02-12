https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/1172211682/





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
    
    int findLength(ListNode*&head){
    int count=0;
    ListNode* temp= head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    return count;
    }
    
    vector<int> nextLargerNodes(ListNode* head) {
        
        if(head->next==NULL){
            vector<int> ans(1);
            
            return ans;
        }
        int leng= findLength(head);
        vector<int> arr(leng);
        stack<int>st;
        ListNode* temp;
        if(head->next!=NULL){
            temp = head->next;
           
        }
        int i =0;
        while(temp!=NULL){
           if(!st.empty()&& arr[st.top()]<temp->val){
               
               arr[st.top()]=temp->val;
               st.pop();
               continue;
           }

            if(temp->val>head->val){
                arr[i]=temp->val;
                i++;
                head=temp;
                temp=temp->next;
            }
            else{
                arr[i]=head->val;
                head= temp;
                temp=temp->next;
                st.push(i);
                i++;
            }




        }
        while(!st.empty()){
            arr[st.top()]=0;
            st.pop();
        }

        return arr;




        
    }
};