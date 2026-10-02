class Solution {
public:
    int dfs(int r, int c, vector<vector<int>>& grid,vector<vector<int>>& vis, int& ar, 
    int drow[], int dcol[]){
        vis[r][c] = 1;
        ar += 1;

        for(int i = 0; i < 4; i++){
            int nrow = r + drow[i];
            int ncol = c + dcol[i];

            if(nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == 1 && vis[nrow][ncol] == 0){
                dfs(nrow, ncol, grid, vis, ar, drow, dcol);
            }
        }
        return ar;

        

    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int r = grid.size(); 
        int c = grid[0].size();
        int ans = 0;

        vector<vector<int>> vis(r, vector<int>(c));
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, -1, 0, +1};
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == 1 && vis[i][j] == 0){
                    int ar = 0;
                    ar = dfs(i, j, grid, vis, ar, drow, dcol);
                    ans = max(ar, ans);
                }
            }
        }
        return ans;
    }
};