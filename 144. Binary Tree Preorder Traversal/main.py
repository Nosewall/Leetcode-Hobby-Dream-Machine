# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def preorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        return self.preOrderHelper(root, [])

    def preOrderHelper(self, root, arr):
        if root is None:
            return

        arr.append(root.val)

        self.preOrderHelper(root.left, arr)
        self.preOrderHelper(root.right, arr)

        return arr
