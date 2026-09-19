class Solution {
public:

    string encode(vector<string>& strs) {
       string s="";
       for(auto i: strs)
       {
        s+=to_string(i.size())+"#"+i;
       }
       return s;

    }
    vector<string> decode(string s) {
    vector<string> result;
    int i = 0;
    while (i < s.size()) {
        int j = i;
        while (s[j] != '#') {
            j++;
        }
        int len = stoi(s.substr(i, j - i));
        j++;
        result.push_back(s.substr(j, len));
        i = j + len;
    }

    return result;
}
};
