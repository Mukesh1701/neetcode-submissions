class Solution {
public:

int f(int i1,int i2,string &s1,string &s2,vector<vector<int>> &d)
{
    if(i1<0 || i2<0)
    {
        return 0;
    }
    if(d[i1][i2]!=-1)return d[i1][i2];
    if(s1[i1]==s2[i2])
    {
       return d[i1][i2]= 1+f(i1-1,i2-1,s1,s2,d);
    }
    return d[i1][i2]=max(f(i1-1,i2,s1,s2,d),f(i1,i2-1,s1,s2,d));

}
    int longestCommonSubsequence(string text, string text2) {
        int i1=text.length()-1;
        int i2=text2.length()-1;
        vector<vector<int>>dp(text.length(),vector<int>(text2.length(),-1));
        return f(i1,i2,text,text2,dp);

        // int ans=INT_MIN;
        // int count=0;
        // if(text.length()>text2.length())
        // {
        //     for(int i=0;i<text.length();i++)
        // {
        //     for(int j=i;j<text2.length();j++)
        //     {
        //         if(text[i]==text2[j])
        //         {
        //             count++;
        //         }
        //         else continue;
        //     }
        //     ans=max(ans,count);
        // }    
        // }
        // else
        // {
        //     for(int i=0;i<text2.length();i++)
        // {
        //     for(int j=i;j<text.length();j++)
        //     {
        //         if(text[i]==text2[j])
        //         {
        //             count++;
        //         }
        //         else continue;
        //     }
        //     ans=max(ans,count);
        // }
        // }
        
        // return ans;
    }
};
