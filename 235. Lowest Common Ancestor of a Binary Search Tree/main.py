# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def lowestCommonAncestor(self, root, p, q):
        """
        :type root: TreeNode
        :type p: TreeNode
        :type q: TreeNode
        :rtype: TreeNode
        """
        right = max(p.val, q.val)
        left = min(p.val, q.val)

        if root.val < left:
            return self.lowestCommonAncestor(root.right, p, q)
        elif root.val > right:
            return self.lowestCommonAncestor(root.left, p, q)
        else:
            return root


