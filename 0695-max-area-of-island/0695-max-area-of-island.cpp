class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0;
        int m = grid.size();
        int n = grid[0].size();
        
        for (int r = 0; r < m; ++r) {
            for (int c = 0; c < n; ++c) {
                if (grid[r][c] == 1) {
                    max_area = max(max_area, dfs(grid, r, c));
                }
            }
        }
        
        return max_area;
    }

private:
    int dfs(vector<vector<int>>& grid, int r, int c) {
        // Base cases: out of bounds or water cell (0)
        if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0) {
            return 0;
        }
        
        // Mark cell as visited by modifying grid in-place
        grid[r][c] = 0;
        
        // Count current cell + 4-directional neighbors
        int area = 1;
        area += dfs(grid, r + 1, c);
        area += dfs(grid, r - 1, c);
        area += dfs(grid, r, c + 1);
        area += dfs(grid, r, c - 1);
        
        return area;
    }
};