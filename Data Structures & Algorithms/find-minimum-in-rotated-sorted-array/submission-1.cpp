class Solution {
public:
    int findMin(vector<int> &a) {
        int l=0;
        int r=a.size()-1;
        int mini=INT_MAX;
        while(l<=r)
        {
            if(a[l]<a[r])
            {
                mini=min(mini,a[l]);
            }
            int m=(l+(r))/2;
            mini= mini=min(mini,a[m]);
            if(a[m]>=a[l])
            {
                l=m+1;
            }
            else
            {
                r=m-1;
            }

        }
        return mini;
    }
};
