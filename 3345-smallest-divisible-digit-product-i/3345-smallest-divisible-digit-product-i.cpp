class Solution {
public:
int bvs(int n,int t){
    int pro=1;
    for(;n>0;n=n/10)
    {
        pro*=n%10;
    }
    return pro;
}
    int smallestNumber(int n, int t) {
        while(bvs(n,t)%t!=0)
        {
            n++;
        }
        return n;

      
        
    }
};