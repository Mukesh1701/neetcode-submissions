class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>h(256,-1);
        int l=0;
        int r=0;
        int maxi=0;
        while(r<s.length())
        {
            if(h[s[r]]!=-1)
            {
                if(h[s[r]]>=l)
                {
                    l=h[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxi=max(len,maxi);
            h[s[r]]=r;
            r++;
        }
        return maxi;
    }
};
