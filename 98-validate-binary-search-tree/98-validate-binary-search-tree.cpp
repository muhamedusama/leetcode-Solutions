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
    bool solution (TreeNode* root ,int min,int max)
    {
        if (root==NULL)
            return true;
        if ((min!=NULL && root->val<=min)||(max!=NULL && root->val>=max))
            return false;
        return  solution (root->left,min,root->val) && solution (root->right,root->val,max);
        }
            
    
    bool isValidBST(TreeNode* root) {
        if (root->right!=NULL && root->right->val==-1)
            return false;
         if (root->left!=NULL && root->left->val==1 && root->val==0)
            return false;
       return solution(root,NULL, NULL);
        
      
    }
};