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
 import java.util.*;

public class Solution {
    public ListNode detectCycle(ListNode head) {
        // Set<ListNode> s = new HashSet<>();

        boolean c = false;

        if (head == null || head.next == null) {
            return null;
        }

        // while (head != null) {
        //     if (s.contains(head)) return head;
        //     s.add(head);
        //     head = head.next;
        // }



        ListNode shortPtr = head;
        ListNode longPtr = head;

        while (longPtr != null && longPtr.next != null)  {
            shortPtr = shortPtr.next;
            longPtr = longPtr.next.next;
            if (shortPtr == longPtr) {
                c = true;
                break;
            }
         }

         if (c) {
            longPtr = head;
            while (shortPtr != longPtr) {
                shortPtr = shortPtr.next;
                longPtr = longPtr.next;
            }
         } else {
            return null;
         }

         return shortPtr;
        
    }
}