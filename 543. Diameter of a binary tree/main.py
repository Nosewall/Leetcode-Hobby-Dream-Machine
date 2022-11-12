class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.max_diameter = 0
        self.diameterHelper(root)
        return self.max_diameter

    def diameterHelper(self, root):
        if root is None:
            return 0
        left_depth = self.diameterHelper(root.left)
        right_depth = self.diameterHelper(root.right)
        diameter = left_depth + right_depth

        self.max_diameter = max(diameter, self.max_diameter)
        return max(left_depth, right_depth) + 1