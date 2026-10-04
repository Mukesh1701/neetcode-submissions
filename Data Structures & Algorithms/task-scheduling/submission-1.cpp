class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
      vector<int>v(26,0);
      for(char i:tasks)
      {
        v[i-'A']++;
      }
      int count=0;
      int m=*max_element(v.begin(),v.end());
      for( int i=0;i<v.size();i++)
      {
        if(v[i]==m)
        {
          count++;
        }
      }
      int result=(m-1)*(n+1)+count;
      return max(result,(int)tasks.size());
    }
};
