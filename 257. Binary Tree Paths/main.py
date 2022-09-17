# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def binaryTreePaths(self, root):
        """
        :type root: TreeNode
        :rtype: List[str]
        """

        def binaryTreePathsHelper(root, arr):
            if root is None:
                return
            arr.append(str(root.val))
            if root.left is None and root.right is None:
                allPaths.append("->".join(arr))
            else:
                binaryTreePathsHelper(root.left, arr)
                binaryTreePathsHelper(root.right, arr)
            arr.pop()

        allPaths = []
        binaryTreePathsHelper(root, [])
        return allPaths
