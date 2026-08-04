class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int i=*min_element(nums.begin(),nums.end()),j=*max_element(nums.begin(),nums.end()),k=0;
        while(i<=j)
        {
            if(i==nums[k])
            {
                k++;
            }
            else{
                res.push_back(i);
            }
            i++;
        
        }
        return res;
    }
};