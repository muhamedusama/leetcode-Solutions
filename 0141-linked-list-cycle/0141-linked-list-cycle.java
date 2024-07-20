/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        if(head==null)
            return false;
        for (int i=0;i<10000;i++)
        {
            if (head.next==null)
                return false;
            head=head.next;
        }
        return true;
        
    }
}