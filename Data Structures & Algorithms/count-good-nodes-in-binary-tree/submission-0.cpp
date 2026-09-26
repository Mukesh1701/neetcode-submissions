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
    int count=0;
     int dfs(TreeNode* root1,int m)
     {
        if(root1==nullptr)
        {
            return 0;
        }
        if(root1->val>=m) count++;
       m= max(m,root1->val);
       dfs(root1->left,m);
        dfs(root1->right,m);
        return count;
     }
    int goodNodes(TreeNode* root) {
        int m=dfs(root,root->val);
        return m;
    }
};
