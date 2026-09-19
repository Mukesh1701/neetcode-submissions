class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int n=nums.size();
        int r=n-1;
        while(l<=r)
        {
            if(nums[l]==target)
            {
                return l;
            }
            if(nums[r]==target)
            {
                return r;
            }

            int mid=(l+r)/2;
            if(nums[mid]==target) return mid;
            if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target && nums[mid]>target) r=mid-1;
                else
                {
                    l=mid+1;
                }
            }
            else
            {
                if(target<=nums[r] && nums[mid]<target) l=mid+1;
                else
                {
                    r=mid-1;
                } 
            }
        }
        return -1;
    }
};
