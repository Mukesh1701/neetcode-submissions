class Solution {
public:
void d(vector<int>& nums,int in,vector<vector<int>>&a)
{
    if(in==nums.size())
    {
        a.push_back(nums);
        return;
    }
    for(int i=in;i<nums.size();i++)
    {
        swap(nums[i],nums[in]);
        d(nums,in+1,a);
        swap(nums[i],nums[in]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>a;
        d(nums,0,a);
        return a;
    }
};
