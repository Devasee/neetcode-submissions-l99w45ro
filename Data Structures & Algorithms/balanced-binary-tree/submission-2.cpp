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
    int height(TreeNode* root)
    {
        if(root == nullptr)
        return 0;

        int r = height(root->right) ;
        int l = height(root->left);

        return max(r,l) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == NULL)
        return true;

        int diff = abs(height(root->right) - height(root->left));

        if(diff > 1)
        return false;

        return isBalanced(root->left) && isBalanced(root->right);
    }
};
