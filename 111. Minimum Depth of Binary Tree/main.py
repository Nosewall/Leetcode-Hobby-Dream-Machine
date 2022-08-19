# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def minDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        return self.minDepthHelper(root, 0)

    def minDepthHelper(self, root, depth):
        if root is None:
            return 0
        if not root.left and not root.right:
            return 1

        depth += 1
        left = 10000
        right = 10000
        if root.left:
            left = self.minDepthHelper(root.left, depth)
        if root.right:
            right = self.minDepthHelper(root.right, depth)
        return min(left, right) + 1

