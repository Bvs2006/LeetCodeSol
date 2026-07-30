class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
           mp[nums[i]]++;
        }
        int c=0,k=0;
       for(auto i:mp)
       {
      
            c+=(i.second/2);
        
            k+=(i.second%2);
        
       }
       return {c,k};
    }
};