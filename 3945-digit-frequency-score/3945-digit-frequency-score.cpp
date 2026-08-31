class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int,int>mp;
        for(;n>0;n=n/10)
        {
            mp[n%10]++;
        }
        int sum=0;
        for(auto i:mp){
            sum+=(i.first*i.second);
        }
        return sum;
        
    }
};