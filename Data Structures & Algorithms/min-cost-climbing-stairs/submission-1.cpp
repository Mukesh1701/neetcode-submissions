class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1);
      int  p1=0;
       int p2=0;
        for(int i=2;i<=n;i++)
        {
            int c=min(p2+cost[i-1],p1+cost[i-2]);
            p1=p2;
            p2=c;
        }
        return p2;
    }
};