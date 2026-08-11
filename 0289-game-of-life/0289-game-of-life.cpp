class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int dr[]={-1,-1,-1,0,1,1,1,0};
        int dc[]={-1,0,1,1,1,0,-1,-1};
        vector<vector<int>>bvs=board;
        int g;
        for(int i=0;i<bvs.size();i++)
        {
            

            for(int j=0;j<bvs[0].size();j++)
            {
                g=0;
                
                for(int k=0;k<8;k++)
                {
                    int r=dr[k]+i;
                    int c=dc[k]+j;
                    
                    if(r>=0&&r<bvs.size()&&c>=0&&c<bvs[0].size())
                    {
                        if(bvs[r][c]==1)
                        {
                            g++;
                        }
                    }
                }
                if(bvs[i][j]==1)
                {
                    if(g<2||g>3)
                    {
                        board[i][j]=0;
                    }
                    else if(g==2||g==3)
                    {
                        board[i][j]=1;
                    }
                   
                    
                }
                else
                {
                    if(g==3)
                    {
                        board[i][j]=1;
                    }
                }
            }
        }
        
    }
};