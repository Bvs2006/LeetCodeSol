class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int>mp;
        int l=0,h=0;
        string res="";
        int k=INT_MIN;
        while(l<s.size()&&h<s.size())
        {
            mp[s[h]]++;
            while(mp[s[h]]>2)
            {
                mp[s[l]]--;
                l++;

            }
            k=max(k,h-l+1);
            h++;


        }
        
        return k;
    }
};