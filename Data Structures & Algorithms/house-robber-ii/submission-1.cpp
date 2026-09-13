
class Solution {
public:
    int help(vector<int>& nums) {
        int n=nums.size();
        int a=0;
        int b=nums[0];
        int c=0;

        for(int i=1;i<n;i++)
        {
            int take=a+nums[i];
            int not_take=b;
            c=max(take,not_take);
            a=b;
            b=c;
        }
        return b;
    }
    int rob(vector<int>& nums1) {
          int n = nums1.size();

        if(n == 1)
            return nums1[0];
       vector<int>v1,v2;
        for (int i=0;i<nums1.size();i++)
        {
            if(i!=0) v1.push_back(nums1[i]);
            if(i!=nums1.size()-1) v2.push_back(nums1[i]);
        }
        return max(help(v1),help(v2));
    }
};
