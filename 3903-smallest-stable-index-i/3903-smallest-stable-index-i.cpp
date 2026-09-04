class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

      vector<int>mina(nums.size()),maxb(nums.size());
      mina[nums.size()-1]=nums[nums.size()-1];
      maxb[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxb[i]=max(maxb[i-1],nums[i]);
        }
        for(int i=nums.size()-2;i>=0;i--){
            mina[i]=min(mina[i+1],nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(maxb[i]-mina[i]<=k){
                return i;
            }
        }
        return -1;
    }

};