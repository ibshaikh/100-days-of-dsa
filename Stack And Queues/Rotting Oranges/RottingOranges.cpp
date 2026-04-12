#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    queue<tuple<int, int, int>> q;

    // Push all rotten oranges initially
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 2) {
                q.push({i, j, 0});
            }
        }
    }

    int maxMinutes = 0;

    while (!q.empty()) {
        auto [x, y, level] = q.front();
        q.pop();

        // Up
        if (x > 0 && grid[x - 1][y] == 1) {
            grid[x - 1][y] = 2;
            q.push({x - 1, y, level + 1});
        }

        // Down
        if (x < m - 1 && grid[x + 1][y] == 1) {
            grid[x + 1][y] = 2;
            q.push({x + 1, y, level + 1});
        }

        // Right
        if (y < n - 1 && grid[x][y + 1] == 1) {
            grid[x][y + 1] = 2;
            q.push({x, y + 1, level + 1});
        }

        // Left
        if (y > 0 && grid[x][y - 1] == 1) {
            grid[x][y - 1] = 2;
            q.push({x, y - 1, level + 1});
        }

        maxMinutes = max(maxMinutes, level);
    }

    // Check if any fresh orange remains
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) return -1;
        }
    }

    return maxMinutes;
}