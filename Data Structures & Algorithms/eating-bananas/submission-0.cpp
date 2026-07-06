class Solution {
public:
long long totalhr(vector<int>new1,int k)
{
    int total=0;
    for(int i=0;i<new1.size();i++)
    {
        total+=ceil(double(new1[i])/k);
    }
    return total;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int th=totalhr(piles,mid);
            if(th<=h)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};
