class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
        for(int i=0;i<word.size();i++)
        {
            freq[word[i]-'a']++;
        }
        int total=0;
        sort(freq.rbegin(),freq.rend());
        for (int i=0;i<26;i++)
        {
            if(freq[i]==0) break;

            total += freq[i] * ((i / 8) + 1);

        }

        
        return total; 
    }
};