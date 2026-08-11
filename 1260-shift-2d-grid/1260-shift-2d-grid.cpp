class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        k=k%(grid.size()*grid[0].size());
        while(k--)
        {
            for(int i=0;i<grid.size();i++)
            {
                for(int j=0;j<grid[0].size();j++)
                {
                    swap(grid[i][j],grid[0][0]);
                   
                }
            }
        }
        return grid;
        
    }
};