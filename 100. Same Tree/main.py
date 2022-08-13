# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isSameTree(self, p, q):
        """
        :type p: TreeNode
        :type q: TreeNode
        :rtype: bool
        """
        pPre = self.getPreOrder(p, [])
        pIn = self.getInorder(p, [])

        qPre = self.getPreOrder(q, [])
        qIn = self.getInorder(q, [])

        return pPre == qPre and pIn == qIn

    def getInorder(self, root, arr):
        if root is None:
            arr.append(None)

        self.getInorder(root.left, arr)
        arr.append(root.val)
        self.getInorder(root.right, arr)

        return arr

    def getPreOrder(self, root, arr):
        if root is None:
            arr.append(None)
            return

        arr.append(root.val)
        self.getPreOrder(root.left, arr)
        self.getPreOrder(root.right, arr)

        return arr
