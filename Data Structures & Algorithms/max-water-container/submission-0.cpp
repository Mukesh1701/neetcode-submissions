class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int n=heights.size();
        int j=n-1;
        int maxi=INT_MIN;
        while(i<=j)
        {
            int a=min(heights[i],heights[j])*(j-i);
            maxi=max(maxi,a);
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return maxi;
    }
};
