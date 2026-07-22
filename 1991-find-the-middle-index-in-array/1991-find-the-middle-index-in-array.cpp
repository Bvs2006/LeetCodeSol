class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(nums.size());
        p[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            p[i]=p[i-1]+nums[i];
        }
        if(p[n-1]-p[0]==0) return 0;
        for(int i=1;i<p.size();i++)
        {
            if(p[n-1]-p[i]==p[i-1]) return i; 

        }
        return -1;
    }
};