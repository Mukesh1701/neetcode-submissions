class Solution {
public:
bool d(string &s1,int s,int st,vector<vector<int>>&d1)
{

    if(s>st)
    {
        return true;
    }
    if(d1[s][st]!=-1)
    {
        return d1[s][st];
    }
    if(s1[s]==s1[st])
    {
        return d1[s][st]=d(s1,s+1,st-1,d1);
    }
      
      return d1[s][st]=false;
}
    int countSubstrings(string s) {
       int ans=0;
       int n=s.length();
       int count=0;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {
                if(d(s,i,j,dp))
                {
                    count++;
                }
            }
        }
        return count;
    }
};
