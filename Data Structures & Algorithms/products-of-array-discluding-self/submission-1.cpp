class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        int size=nums.size();
        vector<int>ans1(size,1);

        int p=1;
        for(int i=0;i<size;i++)
        {
            ans1[i]=p;
            p*=nums[i];
        }
        int s=1;
        for(int i=size-1;i<nums.size();i--)
        {
            ans1[i]*=s;
            s*=nums[i];
        }
        return ans1;
    }
};
