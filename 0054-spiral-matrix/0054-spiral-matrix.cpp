class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int r = 0;
        int c = matrix[0].size()-1;
        int t=0,b=matrix.size()-1;
        while(r<=c&&t<=b)
        {
            for(int i=r;i<=c;i++)
            {
                res.push_back(matrix[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++)
            {
                res.push_back(matrix[i][c]);
            }
            c--;
            if(t<=b){
            for(int i=c;i>=r;i--)
            {
                res.push_back(matrix[b][i]);
            }
            b--;
            }
            if (r <= c) {
                for (int i = b; i >= t; i--) {
                    res.push_back(matrix[i][r]);
                }
                r++;
            }

        }
        return res;

        

           


    }
};