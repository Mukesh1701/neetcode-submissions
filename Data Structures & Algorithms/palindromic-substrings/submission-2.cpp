class Solution {
public:
int d(string &s1,int s,int st)
{
    int count=0;
    while(s>=0 && st<s1.length() && s1[s]==s1[st])
    {
        count++;
        s--;
        st++;
    }

    return count;
}
    int countSubstrings(string s) {
       int count=0;
       for(int i=0;i<s.length();i++)
        {
            count+=d(s,i,i);
            count+=d(s,i,i+1);
        }
        return count;
    }
};
