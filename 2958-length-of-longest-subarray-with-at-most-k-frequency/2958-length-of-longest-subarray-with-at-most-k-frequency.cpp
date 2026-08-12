class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int r=0,l=0,res=0;
        while(r<nums.size())
        {
            if(freq[nums[r]]<k)
            {
                res=max(res,r-l);
                freq[nums[r++]]++;
                
            }
            else
            {
                freq[nums[l++]]--;

            }
        }
        return res+1;
    }
};