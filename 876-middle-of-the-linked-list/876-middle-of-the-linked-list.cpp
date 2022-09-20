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
    ListNode* middleNode(ListNode* head) {
           ListNode *temp1=head;
        int counter=0;
          while (temp1->next!=NULL)
        {
          
             temp1=temp1->next;
            counter++;
        }
        counter++;
        temp1=head;
        counter/=2;
         while(counter--)
         {
             temp1=temp1->next;
         }
        return temp1;
    }
};