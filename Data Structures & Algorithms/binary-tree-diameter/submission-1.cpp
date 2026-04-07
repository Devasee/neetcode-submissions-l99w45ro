class Solution {
public:
    int maxa = 0;

    int height(TreeNode* root) {
        if(root == nullptr)
            return 0;

        int rightSide = height(root->right);
        int leftSide = height(root->left);

        maxa = max(maxa, rightSide + leftSide);

        return max(leftSide, rightSide) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);   // compute using helper
        return maxa;    // return diameter
    }
};