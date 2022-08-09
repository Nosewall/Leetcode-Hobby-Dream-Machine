# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return head

        originalHead = head
        previousValue = head.val
        currentNode = head
        while currentNode.next is not None:
            if currentNode.next.val == previousValue:
                currentNode.next = currentNode.next.next
            elif currentNode.next.val != previousValue:
                currentNode = currentNode.next
                previousValue = currentNode.val

        return originalHead
