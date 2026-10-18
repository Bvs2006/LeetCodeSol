class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    int ran=200010;
    vector<int>freq(ran,0);
    for(int i=0;i<nums.size();i++)
    {
        freq[nums[i]+100000]++;

    }
    int c=0;
    for(int i=ran-1;i>=0;i--)
    {
        c+=freq[i];
        if(c>=k)
        {
            return i-100000;


        }
    }
    return 0;

    }
};