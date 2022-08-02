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
    ListNode* reverseList(ListNode* head) {
       if (head== NULL || head->next==NULL)
           return head;
        ListNode * n=head->next,*curr=head,*newhead;
        curr->next=NULL;
        while (n->next !=NULL)
        {
            ListNode *temp=n->next;
            cout<<curr->val<<" "<<n->val<<" "<<temp->val<<endl;
            n->next=curr;
            
            curr=n;
            n=temp;
            temp=n->next;
            
        }
           n->next=curr;
            curr=n;

        cout<<n->val<<endl;
        head=n;
        ListNode *temp2=head;;
        while (temp2 != NULL)
        {
            cout<<"temp 2 ="<<" "<<temp2->val<<endl;
            temp2=temp2->next;
        }
        return head;
    }
};