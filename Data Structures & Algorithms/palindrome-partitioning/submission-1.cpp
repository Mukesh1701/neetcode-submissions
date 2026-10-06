class Solution {
public:
    bool p(string s, int start, int end)
    {
        while(start <= end)
        {
            if(s[start++] != s[end--])
                return false;
        }

        return true;
    }

    void f(int in, vector<string>& ans, string s,
           vector<vector<string>>& res)
    {
        if(in == s.length())
        {
            res.push_back(ans);
            return;
        }

        for(int i = in; i < s.length(); i++)
        {
            if(p(s, in, i))
            {
                ans.push_back(s.substr(in, i - in + 1));

                f(i + 1, ans, s, res);

                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> res;
        vector<string> ans;

        f(0, ans, s, res);

        return res;
    }
};