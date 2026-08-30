class Solution {
public:
    int min(int a,int b,int c)
    {
        int res=a;
        if(res>b)
        {
            res=b;
        }
        if(res>c)
        {
            res=c;
        }
        return res;
    }
    int minimumDeletions(vector<int>& nums) {
        int max=0,mini=0;
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(nums[i]>nums[max]){max=i;}
            if(nums[i]<nums[mini]){mini=i;}
        }
        int res=0;
        if(max<mini)
        {
            res=min(size-max,mini+1,(size-mini)+max+1);
            
        }
        else{
            res=min(size-mini,max+1,(size-max)+mini+1);
        }
        return res;
    }
};