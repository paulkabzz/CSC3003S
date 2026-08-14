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

        if (head == null) return false;

        ListNode l = head;
        ListNode s = head;

        while (l.next != null && l.next.next != null) {
            l = l.next.next;
            s = s.next;

            if (s == l) return true;
        }

        return false;
        
        
    }
}