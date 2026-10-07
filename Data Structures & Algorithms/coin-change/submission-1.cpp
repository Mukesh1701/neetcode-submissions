class Solution {
public:

    int d(vector<int>& coins, int amount,vector<int> &dp)
    {
        if(amount == 0)
        {
            return 0;
        }

        int ans = INT_MAX;
        if(dp[amount]!=-1)
        {
            return dp[amount];
        }
        for(int i = 0; i < coins.size(); i++)
        {
            if(coins[i] <= amount)
            {
                int result = d(coins, amount - coins[i],dp);

                if(result != INT_MAX)
                {
                    ans = min(ans, 1 + result);
                }
            }
        }

        return dp[amount]=ans;
    }

    int coinChange(vector<int>& coins, int amount)
    {
        int n=coins.size();
        vector<int>dp(amount+1,-1);
        int ans = d(coins, amount ,dp);

        if(ans == INT_MAX)
            return -1;

        return ans;
    }
};