class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>& triangle,int row,int col){
        if(row==0) return triangle[0][0];
        int less = 1e9;
        int more = 1e9;
        if(dp[row][col]!=-1) return dp[row][col];
        if(col-1>=0&&col-1<triangle[row-1].size()){
            less = solve(triangle,row-1,col-1);
        }
        if(col<triangle[row-1].size()){
            more = solve(triangle,row-1,col);
        }
        return dp[row][col] = triangle[row][col]+min(more,less);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size()-1;
        int minval = 1e9;
        for(int i =0;i<201;i++){
            for(int j =0;j<201;j++)
                dp[i][j] = -1;
        }
        for(int i =0;i<triangle[n].size();i++){
            minval = min(minval,solve(triangle,n,i));
        }
        return minval;
    }
};