class Solution {
public:
 vector<string>res;
void back(int index,string s,vector<string>&map,vector<char>&digits,vector<string>&res)
{
    if(index==digits.size())
    {    res.push_back(s);
        return;
    }

    string l=map[digits[index]-'0'];
    for(int i=0;i<l.size();i++)
    {
        back(index+1,s+l[i],map,digits,res);
    }
    
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string>map={ "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       
        vector<char>digitss(digits.begin(),digits.end());
        for(int i=0;i<digitss.size();i++)
        {
            cout<<digitss[i];
        }
        back(0,"",map,digitss,res);
        return res;
        
    }
};