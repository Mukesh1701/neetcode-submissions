class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int n=height.size();
        int j=n-1;
        int leftmax=0;
        int rightmax=0;
        int ans=0;
        while(i<=j)
        {
            if(height[i]<height[j])
            {
                leftmax=max(leftmax,height[i]);
                ans+=leftmax-height[i];
                i++;
            }
            else
            {
                rightmax=max(rightmax,height[j]);
                ans+=rightmax-height[j];
                j--;
            }
        }
        return ans;
    }
};
