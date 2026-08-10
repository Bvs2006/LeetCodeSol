class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int rows=n;
        int col=n;
         vector<vector<int>>matrix(rows,vector<int>(col));
        int r = 0;
        int c = rows-1;
        int t=0,b=col-1;
        int sum=1;
        while(r<=c&&t<=b)
        {
            for(int i=r;i<=c;i++)
            {
                matrix[t][i]=sum;
                sum++;
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                matrix[i][c]=sum;
                sum++;
            }
            c--;
            if(t<=b){
            for(int i=c;i>=r;i--)
            {
                matrix[b][i]=sum;
                sum++;
            }
            b--;
            }
            if (r <= c) {
                for (int i = b; i >= t; i--) {
                    matrix[i][r]=sum;
                    sum++;
                }
                r++;
            }

        }
        return matrix;;

    }
};