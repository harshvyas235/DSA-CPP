class Solution {
public:
    int max(TreeNode * root){
        if(root==NULL){
            return 0;
        }
       
        int max1=1+max(root->left);
       
        int max2=1+max(root->right);
      

        int ans=0;
        if(max1>max2){
            ans=max1;
        }
        else{
            ans=max2;
        }

        return ans;


    }
    int maxDepth(TreeNode* root) {
        int depth = max(root);
        return depth;
    }
};