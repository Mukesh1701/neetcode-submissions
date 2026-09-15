class Solution {
public:
    bool isValid(string s) {
        int count=0;
        stack<char>sq;
        for(auto c:s)
        {
            if(c=='(' ||c== '{'||c=='[')
            {
                sq.push(c);
            }
            else
            {
                if(sq.empty())
                {
                    return false;
                }
                if(c==')' && sq.top()!='(') return false;
                if(c=='}' && sq.top()!='{') return false;
                if(c==']' && sq.top()!='[') return false;
                sq.pop();
            }

        }
        return sq.empty();
    }
};
