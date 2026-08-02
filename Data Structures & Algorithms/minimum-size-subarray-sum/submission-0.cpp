class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int i=0;
      int j=0;
      int mini=INT_MAX;
      int sum=0;
      while(j<nums.size())
      {
        sum+=nums[j];
        while(sum>=target)
        {
            int length=j-i+1;
            mini=min(length,mini);
            sum-=nums[i];
            i++;
        }
        j++;
        
      }  
      if(mini==INT_MAX) return 0;
      else return mini;
    }
};