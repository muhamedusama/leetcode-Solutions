/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void solution (TreeNode* root, TreeNode* p, TreeNode* q,TreeNode *&x)
    {
         if (root==NULL)
          return;
        cout<<root->val;
        if (root==p || root==q)
        { x=root;
            return ;}
        if(root->right==p && root->left==q ||root->right==q && root->left==p )
             { x=root;
         return;}
        if (root->val>p->val && root->val>q->val)
            solution(root->left,p,q,x);
        else if (root->val<p->val && root->val<q->val)
                solution(root->right,p,q,x);
        else
        { x=root;
         return;}
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *x;
        if (root==NULL)
            return NULL;
             solution(root,p,q,x);
            return x;
        
    }
};