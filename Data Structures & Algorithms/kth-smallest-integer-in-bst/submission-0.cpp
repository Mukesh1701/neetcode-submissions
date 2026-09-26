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
    vector<int>v;
    void v1(TreeNode* r)
    {
        if(r==nullptr)
        {
            return ;
        }
       v.push_back(r->val);
        v1(r->left);
        v1(r->right);
       
    }
    int kthSmallest(TreeNode* root, int k) {
       v1(root);
        sort(v.begin(), v.end());
        return v[k-1];
    }
};
