class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int o=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(o>0)
            {
                res+=s[i];
            }
               o++;
            }
            
            
            if(s[i]==')')
            {
                o--;
                if(o>0)
                {
                    res+=s[i];
                }
            }



        }
        return res;
    }
};