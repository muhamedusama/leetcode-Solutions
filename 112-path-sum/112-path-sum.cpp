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
    bool solution(TreeNode* root, int targetSum,int sum,bool &flag)
    {
        if (root==NULL)
            return flag;
        sum+=root->val;
        cout<<"sum = "<<" "<<sum<<endl;
        if (sum==targetSum && root->right==NULL && root->left==NULL)
             return flag=true;
        solution(root->left,targetSum,sum,flag);
        solution(root->right,targetSum,sum,flag);
        return flag;    
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
                cout<<targetSum<<endl;
        int sum=0;
        bool flag=false;
        return solution(root,targetSum,sum,flag);
    }
};