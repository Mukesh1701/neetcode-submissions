class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        vector<int>h1(26,0);
        vector<int>h2(26,0);
        for(char c:  s1)
        {
            h1[c-'a']++;
        }
        int left=0;
        for(int right=0;right<s2.length();right++)
        {
            h2[s2[right]-'a']++;
           
            if( right-left+1>s1.length())
            {
                h2[s2[left]-'a']--;
                left++;
            }
            if( right-left+1==s1.length())
            {
                if(h1==h2)  return true;
            }
        }
        return false;
    }
};
