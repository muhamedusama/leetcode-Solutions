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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return head;
      
       ListNode* current=head;
       ListNode* next=head->next;
       ListNode* temp;
       ListNode* temp2;
       if (next==NULL)
            head=current;
        else
            head=next;
        int i=0;
        while (current != NULL && next != NULL)
        {
            //cout<<current->val<<endl; 
            temp=next->next;
            next->next=current;
            if (temp !=NULL && temp->next !=NULL )
                current->next=temp->next;
             else if (temp !=NULL && temp->next ==NULL)
                    current->next=temp;
            else
                current->next=NULL;
            current=temp;   
                if (current != NULL)
                   { 
                       //cout<<current->val<<endl; 
                       next=current->next;
                       //cout<<next->val<<endl;
                }
                 i++;  
        }
        return head;

    }
};