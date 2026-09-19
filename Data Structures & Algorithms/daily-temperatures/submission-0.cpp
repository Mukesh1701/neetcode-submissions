class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>s;
        int n=temperatures.size();
        vector<int>n1(n,0);
        for(int j=0;j<n;j++)
        {
            while(!s.empty() && temperatures[s.top()]<temperatures[j])
            {
                int prev=s.top();
                s.pop();
                n1[prev]=j-prev;
            }
        s.push(j);
        }
        return n1;
    }
};
