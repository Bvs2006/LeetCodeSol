class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0,res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
            {
                c++;
            }
            else
            {
                c--;
            }
            if(c<0){
                c=0;
                res++;
            }
        }
        return res+c;
    }
};