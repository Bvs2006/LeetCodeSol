class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>maxc(n),minb(n);
        maxc[0]=nums[0];
        minb[n-1]=nums[n-1];
        for(int i=1;i<n;i++)
        {
            maxc[i]=max(maxc[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--){
            minb[i]=min(minb[i+1],nums[i]);
        }
        for(int i=0;i<n;i++){
            if(maxc[i]-minb[i]<=k){
                return i;
            }
        }
        return -1;
    }
};