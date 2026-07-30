# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        num1 = 0
        num2 = 0
        curr = l1
        i = 0            

        while curr is not None:
            num1 += curr.val * pow(10, i)
            curr = curr.next
            i += 1

        i = 0
        curr = l2
        while curr is not None:
            num2 += curr.val * pow(10, i)
            curr = curr.next
            i+=1


        res = num1 + num2

        head: Optional[ListNode] = ListNode(0, None)

        tail = head
 
        
        while not(res == 0):
            dig = res % 10

            # create new node
            new_node = ListNode(dig)

            # set our tail node's next to the newly created node
            tail.next = new_node

            # advance the tail to the next
            tail = tail.next

            res //= 10

        # advance the head to shoft its starting position to the next node after the dummy 0 node

        return head.next if head.next is not None else head



        