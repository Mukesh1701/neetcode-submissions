class Solution {
public:
    void d(int i, vector<vector<int>>&ans,vector<int>&v,vector<int> &nums)
    {
        if(i>=nums.size())
        {
            ans.push_back(v);
            return;
        }
       v.push_back(nums[i]);
        d(i+1,ans,v,nums);
        v.pop_back();
        d(i+1,ans,v,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        d(0,ans,v,nums);
        return ans;
    }
};
