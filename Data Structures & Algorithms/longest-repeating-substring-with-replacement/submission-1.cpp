class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> h(26,0);
        int l=0;
        int r=0;
        int maxi=0;
        int a=0;
        while(r<s.length())
        {
           h[s[r]-'A']++;
            a=max(h[s[r]-'A'],a);
            if((r-l+1)-a>k)
            {
                    h[s[l]-'A']--;
                    l++;
                
            }
                int length=r-l+1;
                maxi=max(length,maxi);
            
            r++;

        }
        return maxi;
    }
};
