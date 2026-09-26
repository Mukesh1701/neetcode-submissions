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
   bool hlo(TreeNode* roo,long long l,long long s)
   {
        if(roo==nullptr)
        {
            return true;
        }
        if(roo->val<=l || roo->val>=s)
        {
            return false;
        }
        
        return hlo(roo->left,l,roo->val) && hlo(roo->right,roo->val,s);
   }
    bool isValidBST(TreeNode* root) {
       return hlo(root,LLONG_MIN, LLONG_MAX);
    
    }
};
