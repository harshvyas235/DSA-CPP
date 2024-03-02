/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxt(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int max1=1+ maxt(root->left);
        int max2 =1+ maxt(root->right);
        int ans=0;
        if(max1>max2) ans=max1;
        else ans = max2;
        return ans ;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int opt1=diameterOfBinaryTree(root->left);
        int opt2=diameterOfBinaryTree(root->right);;
        int opt3= maxt(root->left)+maxt(root->right);
        int ans = max(opt1,opt2);
        return max(ans,opt3);



        


       
        
    }
};