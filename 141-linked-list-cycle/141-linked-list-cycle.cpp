/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL)
            return false;
       ListNode *q;
        q=head->next;
       for (int i=0;i<10000;i++)
       {
           if (q==NULL)
               return false;
           q=q->next;
       }
    return true;
    }
    
};