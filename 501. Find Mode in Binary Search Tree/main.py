# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root):
        allKeys = {}
        self.findModeHelper(root, allKeys)
        mostCommon = []
        sortedValues = list(allKeys.values())
        sortedValues.sort(reverse=True)
        highestValue = sortedValues[0]
        for key, value in allKeys.items():
            if value == highestValue:
                mostCommon.append(key)
        return mostCommon


    def findModeHelper(self, root, allKeys):
        if root is None:
            return
        if allKeys[root.val] is None:
            allKeys[root.val] = 1
        else:
            allKeys[root.val] += 1

        self.findModeHelper(root.left, allKeys)
        self.findModeHelper(root.right, allKeys)






