class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        int m = heightMap.size();
        if (m == 0) return 0;
        int n = heightMap[0].size();
        if (n == 0) return 0;

        // Min-heap to always expand from the lowest boundary
        priority_queue<pair<int, pair<int, int>>, 
                       vector<pair<int, pair<int, int>>>, 
                       greater<pair<int, pair<int, int>>>> pq;

        vector<vector<bool>> visited(m, vector<bool>(n, false));

        // Add all boundary cells into the heap
        for (int i = 0; i < m; i++) {
            pq.push({heightMap[i][0], {i, 0}});
            pq.push({heightMap[i][n-1], {i, n-1}});
            visited[i][0] = visited[i][n-1] = true;
        }
        for (int j = 0; j < n; j++) {
            pq.push({heightMap[0][j], {0, j}});
            pq.push({heightMap[m-1][j], {m-1, j}});
            visited[0][j] = visited[m-1][j] = true;
        }

        // Directions (up, down, left, right)
        vector<vector<int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        int water = 0;

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            int height = curr.first;
            int x = curr.second.first;
            int y = curr.second.second;

            for (auto& d : dirs) {
                int nx = x + d[0];
                int ny = y + d[1];

                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    // If neighbor lower, water is trapped
                    water += max(0, height - heightMap[nx][ny]);
                    // Push updated height (max of current boundary or neighbor)
                    pq.push({max(height, heightMap[nx][ny]), {nx, ny}});
                }
            }
        }
        return water;
    }
};
