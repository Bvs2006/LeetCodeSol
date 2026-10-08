class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
    if (mat.empty() || mat[0].empty()) return {};

    int rows = mat.size();
    int cols = mat[0].size();
    vector<int> result;
    result.reserve(rows * cols);

    for (int d = 0; d < rows + cols - 1; ++d) {
        int r, c;

        if (d % 2 == 0) {
            // Upward direction
            r = (d < rows) ? d : rows - 1;
            c = d - r;
            while (r >= 0 && c < cols) {
                result.push_back(mat[r][c]);
                --r;
                ++c;
            }
        } else {
            // Downward direction
            c = (d < cols) ? d : cols - 1;
            r = d - c;
            while (c >= 0 && r < rows) {
                result.push_back(mat[r][c]);
                ++r;
                --c;
            }
        }
    }

    return result;
}
};