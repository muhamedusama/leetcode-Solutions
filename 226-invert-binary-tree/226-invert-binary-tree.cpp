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
//         void solution (TreeNode *temp1,TreeNode *temp2)
//     {
//             if (temp1 ==NULL && temp2==NULL)
//                 return;
//          if (temp1==NULL )
//          {
//              temp1->val=temp2->val;
//              temp2=NULL;
//                 return ;
//          }
//               if (temp2==NULL )
//          {
//              temp2->val=temp1->val;
//              temp1=NULL;
//                 return ;
//          }
//             int x;
//            x= temp1->val;
//             temp1->val=temp2->val;
//             temp2->val=x;
            
//         cout<<"temp1"<<" "<<temp1->val<<endl;
//         cout<<"temp2"<<" "<<temp2->val<<endl;
//         solution(temp1->left,temp2->right);
//         solution(temp1->right,temp2->left);
        


//     }
    TreeNode* invertTree(TreeNode* root) {
        if (root==NULL)
            return NULL;
        invertTree(root->left);
         invertTree(root->right);
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        return root;
    }
};