class Solution {
public:
    bool d(int i,string s, vector<string>& wordDict,vector<int>&dp) {
    if(i==s.size())
    {
        return true;
    }
    if(dp[i]!=-1) return dp[i];
    for(int in=0;in<wordDict.size();in++)
    {
       string word=wordDict[in];
        if(s.substr(i,word.size())==word)
        {
            if(d(i+word.size(),s,wordDict,dp)) return dp[in]=true;
        }
    }
    return dp[i]=false;
    
    }
    bool wordBreak(string s, vector<string>& wordDict) {
       vector<int>dp(s.length(),-1);
        return d(0,s,wordDict,dp);
    }
};
