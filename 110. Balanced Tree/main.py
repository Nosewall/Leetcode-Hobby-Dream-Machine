# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    balanced = True
    def isBalanced(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """
        self.balanceRecursion(root)
        return self.balanced

    def balanceRecursion(self, root):
        if root is None:
            return 0
        left = self.balanceRecursion(root.left)
        right = self.balanceRecursion(root.right)
        if abs(left - right) > 1:
            self.balanced = False
        return max(left, right) + 1

