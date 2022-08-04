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
      void solution (TreeNode *root,vector<int>&x)
    {
        if (root==NULL)
            return;
        x.push_back(root->val);
        solution(root->left,x);
        solution(root->right,x);
    }
    vector<int> preorderTraversal(TreeNode* root) {
             vector<int>x;
    solution (root,x);
        return x;
    }
};