# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def postorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        return self.postOrderHelper(root, [])

    def postOrderHelper(self, root, arr):
        if root is None:
            return

        self.postOrderHelper(root.left, arr)
        self.postOrderHelper(root.right, arr)
        arr.append(root.val)
        return arr
