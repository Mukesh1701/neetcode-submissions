class Solution {
public:
    // int d(vector<int>&nums,int i,int m)
    // {
    //     if(i>=nums.size())
    //     {
    //         return m;
    //     }
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         d(nums,i+1,m)
    //     }
    // }
    int maxProduct(vector<int>& nums) {
        int p=1;
        int s=1;
        int ans=INT_MIN;
        int max1=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(p==0) p=1;
            if(s==0) s=1;
            p*=nums[i];
            s*=nums[nums.size()-i-1];
            max1=max(p,s);
            ans=max(ans,max1);
        }
        return ans;
    }
};
