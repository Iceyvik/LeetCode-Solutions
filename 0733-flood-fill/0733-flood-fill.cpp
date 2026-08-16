class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& ans,
             vector<vector<int>>& image, int color, vector<int> delrow,
             vector<int> delcol, int incolor) {
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();
        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                image[nrow][ncol] == incolor && ans[nrow][ncol] != color) {
                dfs(nrow, ncol, ans, image, color, delrow, delcol, incolor);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int incolor = image[sr][sc];
        vector<vector<int>> ans = image;
        vector<int> delrow = {-1, 0, 1, 0};
        vector<int> delcol = {0, 1, 0, -1};
        dfs(sr, sc, ans, image, color, delrow, delcol, incolor);
        return ans;
    }
};