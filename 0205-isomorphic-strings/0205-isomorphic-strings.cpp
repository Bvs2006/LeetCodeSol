class Solution {
public:

    bool isIsomorphic(string s, string t) {
         map<char,char>mp;
        map<char,char>mp2;

    vector<int>ans;
    for(int i=0;i<s.size();i++)
    {
        if(mp.count(s[i])&&mp[s[i]]!=t[i])
        {
            
           
            return false;
        }
        if(mp2.count(t[i])&&mp2[t[i]]!=s[i])
        {
            
           
            return false;
        }
      mp[s[i]]=t[i];
      mp2[t[i]]=s[i];
        


    
        
    }
      return true;
    }
};