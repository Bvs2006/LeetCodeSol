class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        vector<int>a;
        vector<int>b=nums;
        for(int i=0;i<nums.size();i++)
        {
            a.push_back(nums[i]);
            int g=*max_element(a.begin(),a.end());
            int e=*min_element(b.begin(),b.end());
            if(g-e<=k)
            {
                return i;
            }
            b.erase(b.begin());
        }
        return -1;
    }

};