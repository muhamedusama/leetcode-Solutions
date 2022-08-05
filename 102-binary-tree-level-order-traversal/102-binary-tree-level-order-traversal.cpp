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
//     void solution (TreeNode *root,vector<vector<int>>&x,int i,vector<int>y)
//     {
//         if (root==NULL)
//             return;
//        y.push_back(root->val);
//         x.push_back(y);
//                cout<<i<<endl;
//         i++;
//         solution(root->left,x,i,y);
//         solution(root->right,x,i,y);
         


//     }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>x;
        if (root==NULL)
            return x;
        queue<TreeNode *>q;
        q.push(root);
        while (!q.empty())
        {
            int size=q.size();
            vector<int>y;
            for (int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                q.pop();
                y.push_back(node->val);
                if (node->left!=NULL)
                    q.push(node->left);
                if (node->right!=NULL)
                    q.push(node->right);
            }
            x.push_back(y);
        }
        
        return x;
    }
};