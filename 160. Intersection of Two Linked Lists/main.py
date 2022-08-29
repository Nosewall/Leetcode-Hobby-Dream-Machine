# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def getIntersectionNode(self, headA, headB):
        """
        :type head1, head1: ListNode
        :rtype: ListNode
        """
        if headA == headB:
            return headA

        a_len = self.getLength(headA)
        b_len = self.getLength(headB)

        if a_len > b_len:
            longer_head = headA
            shorter_head = headB
            difference = a_len - b_len
        else:
            longer_head = headB
            shorter_head = headA
            difference = b_len - a_len

        for i in range(difference):
            longer_head = longer_head.next

        if longer_head == shorter_head:
            return longer_head

        while longer_head.next:
            longer_head = longer_head.next
            shorter_head = shorter_head.next
            if longer_head == shorter_head:
                return longer_head

        return None

    def getLength(self, head):
        len = 1
        while head.next:
            len += 1
            head = head.next
        return len