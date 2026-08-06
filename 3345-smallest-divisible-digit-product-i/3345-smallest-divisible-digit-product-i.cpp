class Solution {
public:
int bvs(int n){
    int pro=1;
    while(n>0)
    {
        pro*=n%10;
        n=n/10;
    }
    return pro;
}
    int smallestNumber(int n, int t) {
        while(bvs(n)%t!=0)
        {
            n++;
        }
        return n;

      
        
    }
};