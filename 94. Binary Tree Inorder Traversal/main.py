# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def inorderTraversal(self, root):
        """
        :type root: TreeNode
        :rtype: List[int]
        """
        return self.inorderHelper(root, [])


    def inorderHelper(self, root, arr):

        if root is None:
            return

        self.inorderHelper(root.left, arr)
        arr.append(root.val)
        self.inorderHelper(root.right, arr)

        return arr


sol = Solution()
print(sol.inorderTraversal([1, None, 2, 3]))
