# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        if head == None:
            return False

        s = head
        l = head

        while l.next != None and l.next.next != None:
            l = l.next.next
            s = s.next

            if s == l:
                return True

        return False
        