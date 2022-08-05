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
    TreeNode* solution (TreeNode* root, int val,TreeNode* &flag){
        if (root==NULL)
            return 0;
        if (root->val==val)
        {
            flag=root;
        return root;
        }
        cout<<root->val<<endl;
        solution(root->left,val,flag);
        solution(root->right,val,flag);
        return flag;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* flag=0;
        return solution(root,val,flag);
    }
};