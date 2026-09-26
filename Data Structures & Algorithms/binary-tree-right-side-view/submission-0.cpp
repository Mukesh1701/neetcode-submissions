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
vector<int>ans;
    vector<int>v(TreeNode* r,int d)
    {
        if(r==nullptr)
        {
            return {};
        }
        if(ans.size()==d)
        {
            ans.push_back(r->val);
        }
        v(r->right,d+1);
        v(r->left,d+1);
        return ans;

    }
    vector<int> rightSideView(TreeNode* root) {
        
        
        v(root,0);
        return ans;
    }
};
