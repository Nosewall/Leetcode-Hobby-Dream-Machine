class Solution {
public:
    int findSecondMinimumValue(TreeNode* root) {
        int min=-1;
        if(!root)return min;
        find(root,root->val,min);
        return min;
    }
    void find(TreeNode *root,int value,int &min){
        if(root->val!=value&&(root->val<min||min==-1))min=root->val;
        if(root->left)find(root->left,value,min);
        if(root->right)find(root->right,value,min);
    }

};