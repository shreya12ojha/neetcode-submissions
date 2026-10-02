class Solution {
public:
    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>> &vis, 
    int drow[], int dcol[], int n, int m){
        vis[row][col] = 1;

        for(int i = 0; i < 4; i++){
            int nrow = drow[i] + row;
            int ncol = dcol[i] + col;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && vis[nrow][ncol] == 0){
                bfs(nrow, ncol, grid, vis, drow, dcol, n, m);
            }
        }

        
    }
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size(); 
        int c = grid[0].size();
        vector<vector<int>> vis(r, vector<int>(c));

        int ans = 0;
        int drow[] = {1, 0, -1, 0};
        int dcol[] = {0, 1, 0, -1};
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    ans++;
                    bfs(i, j, grid, vis, drow, dcol, r, c);
                }
            }
        }

        return ans;
    }
};
