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
       void solution (TreeNode* root, int val){
        if (root==NULL)
        {
              return;
        }
        if (root->val<val )
        {       if (root->right==NULL)
                { 
            TreeNode *x= new TreeNode(val);
           // x->val=val;
           root->right=x;
                    }
         else 
                solution(root->right,val);
                   
        }
           else if (root->val>val)
           {
                    if (root->left==NULL)
                { 
            TreeNode *x=new TreeNode(val);
           // x->val=val;
           root->left=x;
                    }
         else 
                solution(root->left,val);
            
           }
             
        
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL)
        {
            TreeNode *x=new TreeNode(val);
            root=x;
        }
        else
            solution(root,val);
        return root;
    }
};