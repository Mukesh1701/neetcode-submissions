class Solution {
public:
    void d(string s,vector<string>&ans,int n,int c,int o)
    {
        if(s.length()==n*2)
        {
            ans.push_back(s);
            return;
        }
        
        if(o<n)
        {
            d(s+"(",ans,n,c,o+1);
        }
        if(c<o)
        {
            d(s+")",ans,n,c+1,o);
        }

    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>ans;
        int c=0;
        int o=0;
        d(s,ans,n,c,o);
        return ans;
    }
};
