class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,len,maxlen=0;
        vector<int>mp(256,-1);
        while(r<s.size())
        {
         

            if(mp[s[r]]!=-1)
            {
                if(mp[s[r]]>=l)
                {
                    l=mp[s[r]]+1;
                }


            }
            len=r-l+1;
            maxlen=max(maxlen,len);
            mp[s[r]]=r;
            r++;

        }
        return maxlen;
        
    }
};