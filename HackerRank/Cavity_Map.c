char** cavityMap(int grid_count, char** grid, int* result_count) {
	int i, j;
	char val;
    *result_count = grid_count;
    
    for(i=0; i<grid_count; ++i) {
    	for(j=0; j<grid_count; ++j) {
    		scanf("%c", &grid[i][j]);
        }
    }

    for(i=1; i<grid_count-1; ++i) {
        for(j=1; j<grid_count-1; ++j) {
            if(grid[i][j]>grid[i-1][j] && grid[i][j]>grid[i+1][j] &&
                grid[i][j]>grid[i][j-1] && grid[i][j]>grid[i][j+1]) {

                grid[i][j] = 'X';
            }
        }
    }
    return grid;
}
