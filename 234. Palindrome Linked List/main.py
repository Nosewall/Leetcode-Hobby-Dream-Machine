# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    count = 0
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        newArr = []
        self.isPalindromeHelper(head, [])
        print(newArr)

    def isPalindromeHelper(self, root, arr):
        if root is None:
            return

        arr.append(root.val)
        self.isPalindromeHelper(root.next, arr)
        arr[self.count] = root.val == arr[self.count]
        self.count += 1

