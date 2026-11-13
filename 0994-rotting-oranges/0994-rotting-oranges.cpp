class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int fresh = 0;
        int time = 0;

        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } 
                else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }

        vector<int> dRow = {-1, 1, 0, 0};
        vector<int> dCol = {0, 0, -1, 1};

        while (!q.empty() && fresh > 0) {
            int levelSize = q.size();

            for (int count = 0; count < levelSize; count++) {
                auto [i, j] = q.front();
                q.pop();

                for (int dir = 0; dir < 4; dir++) {
                    int nextRow = i + dRow[dir];
                    int nextCol = j + dCol[dir];

                    if (nextRow >= 0 && nextCol >= 0 &&
                        nextRow < n && nextCol < m &&
                        grid[nextRow][nextCol] == 1) {

                        grid[nextRow][nextCol] = 2;
                        fresh--;

                        q.push({nextRow, nextCol});
                    }
                }
            }

            time++;
        }

        return fresh == 0 ? time : -1;
    }
};