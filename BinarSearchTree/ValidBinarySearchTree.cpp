/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(root==p){
            return p;
        }
        if(root==q){
            return q;
        }
        TreeNode*left;
        TreeNode*right;

        if(root->val>p->val && root->val>q->val){
            left=lowestCommonAncestor(root->left,p,q);
            
        }
        else if(root->val<p->val && root->val<q->val){
            right=lowestCommonAncestor(root->right,p,q);
         
        }
        else if((p->val>root->val && q->val<root->val)|| (p->val<root->val &&q->val>root->val)){
            return root;
        }
        
        if(left!=NULL&&right!=NULL){
            return root;
        }
        if(left==NULL && right!=NULL){
            return right;
        }
       
         return left;
        

       
    }
};