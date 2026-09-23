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
int diameter=0;
int w(TreeNode* root)
{
    if(root==nullptr)
       return 0;

       int left=w(root->left);
       int right=w(root->right);
        diameter=max(left+right,diameter);
       return max(left,right)+1;
}
    int diameterOfBinaryTree(TreeNode* root1) {
       w(root1);
       return diameter;
    }
};
