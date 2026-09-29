class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        vector<vector<int>>bucket(nums.size()+1);
        // int count;
         for(int i=0;i<nums.size();i++)
         {
             mp[nums[i]]++;
         }
         for(auto it:mp)
         {
             bucket[it.second].push_back(it.first);
         }
    vector<int>ans;
         for(int i=nums.size();i>=1&& ans.size()<k;i--)
         {
            for (int j=0;j<bucket[i].size();j++)
            {
                int x=bucket[i][j];
                ans.push_back(x);
                if(ans.size()==k) break;
            }        
            }
        // sort(new1.begin(),new1.end(),greater<pair<int,int>>());
        // 
        // for(int i=0;i<k;i++)
        // {
        //     ans.push_back(new1[i].second);
        // }

        return ans;
    }
};
