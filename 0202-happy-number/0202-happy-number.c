bool isHappy(int n) {
    int sum=0;
    if(n/10==0)
    {
        if(n==1||n==7)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
     while(n>0)
    {
        for(;n>0;n=n/10)
        {
            sum=sum+pow(n%10,2);

        }
    
    }
    return isHappy(sum);
    }
   
   

    
}