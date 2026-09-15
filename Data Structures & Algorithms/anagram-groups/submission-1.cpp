class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //    First, we have to take 2D array. We have to take 2D array, and next in that the first string should be reversed. And next we have to push it into answer array. Then for that we will compare with S1. That inside of that S2 is comparison between that S2 and S1 strings. Initially the vector will be zero, so the loop won't run.
        unordered_map<string,vector<string>>n;
        for(int i=0;i<strs.size();i++)
        {
            string s1=strs[i];
            sort(s1.begin(),s1.end());
            n[s1].push_back(strs[i]);
        }
        vector<vector<string>>key;
        for(auto x:n)
        {
            key.push_back(x.second);
        }
        return key;
    }
};
