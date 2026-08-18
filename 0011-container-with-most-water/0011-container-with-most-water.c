int min(int a,int b)
{
    return a<b?a:b;
}
int maxArea(int* a, int n) {
    int l=0,h=n-1;
    int max=0;
    while(l<=h)
    {
        int c=(h-l)*min(a[l],a[h]);
        if(c>max)
        {
            max=c;
        }
        if(a[l]<a[h]) {
            l++;
        } else {
            h--;
        }

        
        
    }
    return max;
    
}