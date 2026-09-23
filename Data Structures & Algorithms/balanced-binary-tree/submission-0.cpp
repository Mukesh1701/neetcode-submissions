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
    int balance(TreeNode* root1)
    {
        if(root1==nullptr)
        {
            return 1;
        }
        int l=balance(root1->left);
        if(l==-1) return -1;
        int r=balance(root1->right);
        if(r==-1) return -1;

        if(abs(l-r)>1) return -1;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        return balance(root) != -1;
    }
};
