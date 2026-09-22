class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack<int>s;
        vector<pair<int,double>>v;
        for(int i=0;i<position.size();i++)
        {
            double time= (double)(target-position[i])/speed[i];
            v.push_back({position[i],time});
        }
        sort(v.rbegin(),v.rend());
        int f=0;
        double lasttime=0;
        for(auto &c : v)
        {
            if(c.second>lasttime)
            {
                f++;
                lasttime=c.second;
            }
        }
        return f;

            }
};
