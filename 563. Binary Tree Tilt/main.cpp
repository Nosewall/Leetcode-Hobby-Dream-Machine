/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int tiltSum = 0;
    int findTilt(TreeNode* root) {
        DFS(root);
        return tiltSum;
    }
    int DFS(TreeNode* root){
        if(!root) return 0;
        int leftSum = DFS(root -> left);
        int rightSum = DFS(root -> right);
        tiltSum += abs(leftSum - rightSum);
        return leftSum + rightSum + root -> val;
    }
};