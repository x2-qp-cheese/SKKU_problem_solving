int minPathSum(int** grid, int gridSize, int* gridColSize){
    int row=gridSize;
    int col = *gridColSize;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == 0 && j==0)
                continue;
            if(i == 0){
                grid[i][j] = grid[i][j] + grid[i][j-1]; 
            }
            else if(j == 0){
                grid[i][j] = grid[i][j] + grid[i-1][j];
            }
            else{
                grid[i][j] = (grid[i][j-1] < grid[i-1][j]) ? grid[i][j] + grid[i][j-1] : grid[i][j] + grid[i-1][j];
            }
        }
    }
    printf("hello");
    return grid[row-1][col-1];
}