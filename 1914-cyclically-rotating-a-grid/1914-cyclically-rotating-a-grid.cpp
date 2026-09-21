class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();

        for(int layer = 0; layer < min(m,n)/2; layer++) {
            int top = layer;
            int left = layer;
            int bottom = n - 1 - layer;
            int right = m - 1 - layer;

            vector<int> v;

            for(int j = left; j <= right; j++) {
                v.push_back(grid[top][j]);
            }

            for(int i = top + 1; i <= bottom; i++) {
                v.push_back(grid[i][right]);
            }

            for(int j = right - 1; j >= left; j--) {
                v.push_back(grid[bottom][j]);
            }

            for(int i = bottom - 1; i > top; i--) {
                v.push_back(grid[i][left]);
            }

            // Rotate the 1D array
            int x = 0;
            int shift = k % v.size();

            rotate(v.begin(), v.begin() + shift, v.end());

            // Put it back
            for(int j = left; j <= right; j++) {
                grid[top][j] = v[x++];
            }

            for(int i = top + 1; i <= bottom; i++) {
                grid[i][right] = v[x++];
            }

            for(int j = right - 1; j >= left; j--) {
                grid[bottom][j] = v[x++];
            }

            for(int i = bottom - 1; i > top; i--) {
                grid[i][left] = v[x++];
            }
        }

        return grid;
    }
};