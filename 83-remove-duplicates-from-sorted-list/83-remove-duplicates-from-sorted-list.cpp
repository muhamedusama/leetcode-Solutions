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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL || head->next==NULL)
            return head;
        int countarr[201]={0};
        ListNode* curr=head,*n=head->next;
        countarr[head->val+100]++;
        while (n->next!=NULL)
        {
              countarr[n->val+100]++;
            if (countarr[n->val+100]>1)
            {
                countarr[n->val+100]--;
                curr->next=n->next;
                n=n->next;
                continue;
            }
            curr=curr->next;
            n=n->next;
            
        }
        cout<<n->val<<endl;
         countarr[n->val+100]++;
        if (countarr[n->val+100]>1)
        {
            curr->next=NULL;
        }
        return head;
    }
};