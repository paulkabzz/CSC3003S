# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        prev = None
        curr = head

        while curr is not None:
            next = curr.next # store next ptr
            curr.next = prev # reverse pointer
            prev = curr  # advance prev
            curr = next # advance curr

        return prev



        