class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int sum=0;
        int m=1;
        while(n>0)
        {
            int t=min(n,8);
            sum+=t*m;
            n-=t;
            m++;
        }
        return sum;
    }
};