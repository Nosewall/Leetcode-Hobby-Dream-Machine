# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def getMinimumDifference(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        stack = []

        cur = root
        pre = None
        min_num = float('inf')

        while cur or stack:
            if cur:
                stack.append(cur)
                cur = cur.left
            else:
                cur = stack.pop()
                if pre:
                    min_num = min(min_num, abs(cur.val - pre.val))

                pre = cur
                cur = cur.right

        return min_num
