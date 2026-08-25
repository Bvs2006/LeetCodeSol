class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
      for(int i=k;i<INT_MAX;i=i+k)
      {
        if(find(nums.begin(),nums.end(),i)!=nums.end())
        {
            continue;
        }
        else
        {
            return i;
        }
      }
      return 0;
    }
};