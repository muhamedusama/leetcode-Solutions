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
     void solution(TreeNode* root,int &index ,int *&arr)
     {
         if (root==NULL)
             return;
         cout<<index<<endl;
         index++;
         *arr=root->val;
         arr=arr+1;
         solution(root->left,index,arr);
         solution(root->right,index,arr);
         
         return;
     }
    bool findTarget(TreeNode* root, int k) {
        int index=0,arr[10000]={0};
        int* x=&arr[0];
        solution(root,index,x);
        cout<<index;
        for (int i=0;i<index;i++)
            for (int j=i+1;j<index;j++)
                if (arr[i]+arr[j]==k)
                {
                    return true;
                }
                    
        return false;
    }
};