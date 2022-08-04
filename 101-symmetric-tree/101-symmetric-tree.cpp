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
               bool solution (TreeNode *temp1,TreeNode *temp2,bool& flag)
    {
         if (temp1==NULL && temp2==NULL)
            return flag;
          
        else if (temp1==NULL || temp2==NULL )
            return flag=false;
                   
        if (temp1->val!=temp2->val)
        {
           flag=false;
            cout<<"temp1"<<" "<<temp1->val<<endl;
            cout<<"temp2"<<" "<<temp2->val<<endl;

        }
                   cout<<"temp1"<<" "<<temp1->val<<endl;
            cout<<"temp2"<<" "<<temp2->val<<endl;
        solution(temp1->left,temp2->right,flag);
        solution(temp1->right,temp2->left,flag);
        
        return flag; 


    }
    bool isSymmetric(TreeNode* root) {
        bool flag=true;
        return solution(root->left,root->right,flag);
    }
};