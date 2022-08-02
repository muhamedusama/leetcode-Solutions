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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL)
            return head;
       while (head->val==val )
       {
           head=head->next;
           if (head==NULL)
               return head;
       }
            ListNode *curr=head,*curr2=head->next;
        if (curr2==NULL)
            return head;
        while ( curr2->next != NULL)
        {
             if(curr2->val==val)
             {
                curr->next=curr2->next;
                 curr2=curr2->next;
                 continue;
             }
            // cout<<curr2->val<<endl;
            // cout<<curr->val<<endl;
            
           curr=curr->next; 
          curr2=curr2->next;
            if (curr2==NULL)
                return head;
        }
          if (curr2->val==val)
              curr->next=NULL;
          return head;  
        }
    
};