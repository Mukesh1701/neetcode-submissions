class Solution {
public:
    void d(int i,int target,vector<int> &nums,vector<vector<int>> &ans,vector<int> &da)
    {   
        if(i==nums.size())
        {
            if(target==0) ans.push_back(da);
            return ;
        }
        if(nums[i]<=target)
        {
            da.push_back(nums[i]);
            d(i,target-nums[i],nums,ans,da);
            da.pop_back();    
        }
            d(i+1,target,nums,ans,da);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>da;
        d(0,target,nums,ans,da);
        return ans;
    }
};
