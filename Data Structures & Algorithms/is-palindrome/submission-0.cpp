class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for(char a:s)
        {
            if(isalnum(a))
            t+=tolower(a);
        }
        int i=0;
        int n=t.length()-1;
        int j=n;
        while(i<=j)
        {
            if(t[i]!=t[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
