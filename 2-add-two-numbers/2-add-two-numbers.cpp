/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <cmath>
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=0,val1=0,val2=0;
        if(l1==NULL)
        {
            val1=0;
            val2=l2->val;
        }
        else if (l2==NULL)
        {
            val2=0;
            val1=l1->val;
        }   
        else 
        {
            val1=l1->val;
            val2=l2->val;
        }
       long long  totalsum=val1+val2+carry;
        ListNode* dummy = new ListNode(totalsum%10);
        carry=totalsum/10;
        ListNode* node=dummy;
         l1=l1->next;
            l2=l2->next;
        while (l1!=NULL || l2!=NULL)
        {
               if(l1==NULL)
        {
            val1=0;
            val2=l2->val;
        }
        else if (l2==NULL)
        {
            val2=0;
            val1=l1->val;
        }   
        else 
        {
            val1=l1->val;
            val2=l2->val;
        }
            totalsum=val1+val2+carry;
            cout<<totalsum<<endl;
            ListNode* x = new ListNode(totalsum%10);
            carry=totalsum/10;
            node->next=x;
            node=node->next;
            if(l1!=NULL)
                l1=l1->next;
            if (l2!=NULL)
                l2=l2->next;
        }
        if (carry==1)
        {
            ListNode* x = new ListNode(1);
            node->next=x;
        }
         return dummy;
    }
    
};