# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeElements(self, head, val):
        """
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        #First do element 1 since I have to return the original head and all elements might need to be removed
        while head is not None and head.val == val and head:
            head = head.next
        originalHead = head
        #Then do the rest of the list
        while head.next is not None:
            while head.next is not None and head.next.val == val:
                head.next = head.next.next
            head = head.next

        return originalHead
