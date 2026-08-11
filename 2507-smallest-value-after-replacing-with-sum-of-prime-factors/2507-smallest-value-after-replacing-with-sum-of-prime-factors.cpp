class Solution {
public:
static constexpr int maxn = 100005;
vector<int>spf;

void check(int n){
    spf.resize(maxn);
    for(int i=0;i<maxn;i++)
    {
        spf[i]=i;
    }
    for(int i=2;i*i<maxn;i++)
    {
       if(spf[i]==i){
        for(int j=i*i;j<maxn;j+=i){
            if(spf[j]==j){
                spf[j]=i;
            }
        }
       }
        
    }
}
int sum(int n){
    int sum=0;
    while(n>1){
        sum+=spf[n];
        n=n/spf[n];
    }
    return sum;
}
    int smallestValue(int n) {

        check(n);
        while(true){
        int next=sum(n);
        if(next==n){
            return n;
        }
        n=next;

            

        }
        return 0;
        
    }
};