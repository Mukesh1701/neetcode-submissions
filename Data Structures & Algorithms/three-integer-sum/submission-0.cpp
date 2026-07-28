class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
       
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue;
             int k=nums.size()-1;
             int j=i+1;
            while(j<k)
            {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==0)
            {
                vector<int>temp ={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j-1]==nums[j]) j++;
                while(j<k && nums[k+1]==nums[k]) k--;
            }
            if(sum<0) j++;
            if(sum>0)k--;
            }
        }

        
        return ans;
    }
};
