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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == NULL)
        return {};
        vector<vector<int>> res;

        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> v;

        while(!q.empty())
        {
            if(q.front() != nullptr )
            {
                TreeNode* a = q.front();

                if(a->left)
                q.push(a->left);

                if(a->right)
                q.push(a->right);

                v.push_back(a->val);
                q.pop();
            }
            else
            {
                q.pop();
                res.push_back(v);
                v.clear();

                if(!q.empty())
                q.push(NULL);
            }
        }

        return res;
    }
};
