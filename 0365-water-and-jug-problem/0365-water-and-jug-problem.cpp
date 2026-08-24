class Solution {
public:
int x,y,g;
void gcd(int a,int b)
{
    if(b==0)
    {
        x=1;
        y=0;
        g=a;
        return;
    }
    gcd(b,a%b);
    int cx,cy;
    cx=y;
    cy=x-((a/b)*y);
    x=cx;
    y=cy;
   
}
    bool canMeasureWater(int a, int b, int target){
    gcd(a,b);
    
    if(target<=(a+b))
    {
        if(target%g==0)
        {
            return true;
        }
    }
    return false;

    }
};