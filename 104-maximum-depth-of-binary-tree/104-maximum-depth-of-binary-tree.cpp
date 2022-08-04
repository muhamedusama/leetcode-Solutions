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
      int solution (TreeNode *root,int i,int& maxdepth)
    {
        if (root==NULL)
        { 
            return maxdepth;
        }
       if (i>maxdepth)
           maxdepth=i;
        i++;
       cout<<i<<endl;
        solution(root->left,i,maxdepth);
        solution(root->right,i,maxdepth);
        return maxdepth; 


    }
    int maxDepth(TreeNode* root) {
        int i=0;
       return solution(root,1,i);
    }
};