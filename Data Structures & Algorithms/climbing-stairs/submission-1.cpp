class Solution {
public:

    int climbStairs(int n) {
        if (n <= 2)
         return n;
      vector<int>dp1(n+1);
      dp1[1]=1;
      dp1[2]=2;
      for(int i=3;i<=n;i++)
      {
        dp1[i]=dp1[i-1]+dp1[i-2];
      }
        return dp1[n];
    }
};
