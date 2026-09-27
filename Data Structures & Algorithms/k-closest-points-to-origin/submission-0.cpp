class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      priority_queue<pair<int, vector<int>>> pq;

      for(auto o: points)
      {
        int x=o[0];
        int y=o[1];
        int d=x*x+y*y;
        pq.push({d,o});
        if(pq.size()>k)
        {
            pq.pop();
        }
      }
      vector<vector<int>> ans;
      while(!pq.empty())
      {
        ans.push_back(pq.top().second);
        pq.pop();
      }
      return ans;
    }
};
