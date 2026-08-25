class Solution {
int prime(int i)
{
    if(i<2)
    {
        return false;
    }
    for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    return false;
                }
                
            }
         
            return true;
}
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>b;
     
        int c=0;
        for(int i=left;i<=right;i++)
        {
            if(prime(i))
            {
                c++;
                b.push_back(i);
                
            }
            
        }
        if(b.size()<2)
        {
            return {-1,-1};
        }
       int min=INT_MAX;
       pair<int,int>res;
       for(int i=0;i<b.size()-1;i++)
       {
        if(b[i+1]-b[i]<min)
        {
            min=b[i+1]-b[i];
            res={b[i],b[i+1]};
        }
       }
          return {res.first,res.second};
        

         
       
    
        
    }
};