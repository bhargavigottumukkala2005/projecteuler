#include <stdio.h>

#define GRID_SIZE 20

unsigned long long countRoutes(int gridSize) {
    unsigned long long grid[gridSize + 1][gridSize + 1];

    for (int i = 0; i <= gridSize; i++) {
        for (int j = 0; j <= gridSize; j++) {
            grid[i][j] = 0;
        }
    }

    grid[0][0] = 1;

    for (int i = 0; i <= gridSize; i++) {
        for (int j = 0; j <= gridSize; j++) {
            if (i < gridSize) {
                grid[i + 1][j] += grid[i][j];
            }
            if (j < gridSize) {
                grid[i][j + 1] += grid[i][j];
            }
        }
    }

    return grid[gridSize][gridSize];
}

int main() {
    printf("The number of routes through a %dx%d grid is: %llu\n", GRID_SIZE, GRID_SIZE, countRoutes(GRID_SIZE));
    return 0;
}
