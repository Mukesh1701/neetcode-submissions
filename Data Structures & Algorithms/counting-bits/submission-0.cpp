class Solution {
public:
    int c(int n3)
    {
        int w=0;
        while(n3!=0)
        {
            if(n3%2==1)
            {
                w++;
            }
            n3=n3/2;
        }
        return w;
    }
    vector<int> countBits(int n) {
        vector<int>n1(n+1);
        for(int i=0;i<=n;i++)
        {
            int count=c(i);
            n1[i]=count;
        }
        return n1;
    }
};
