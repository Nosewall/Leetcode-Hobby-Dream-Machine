# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    longest = 0

    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        return self.maxDepthHelper(root, 0)

    def maxDepthHelper(self, root, count):
        if root is None:
            return max(self.longest, count)

        count += 1
        self.longest = max(count, self.longest)
        return max(self.maxDepthHelper(root.left, count), self.maxDepthHelper(root.right, count))



